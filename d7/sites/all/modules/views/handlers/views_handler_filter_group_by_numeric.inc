<?php
// $Id: views_handler_filter_group_by_numeric.inc,v 1.1.4.4 2010/08/24 16:13:22 dereine Exp $

/**
 * Simple filter to handle greater than/less than filters
 */
class views_handler_filter_group_by_numeric extends views_handler_filter_numeric {
  function query() {
    $this->ensure_my_table();
    $field = $this->get_field();

    $info = $this->operators();
    if (!empty($info[$this->operator]['method'])) {
      $this->{$info[$this->operator]['method']}($field);
    }
  }
  function op_between($field) {
    if ($this->operator == 'between') {
      $this->query->add_having($this->options['group'], $field, $this->value['min'], '>=');
      $this->query->add_having($this->options['group'], $field, $this->value['max'], '<=');
    }
    else {
      $this->query->add_having($this->options['group'], $field, db_or()->condition($field, $this->value['min'], '>=')->condition($field, $this->value['max'], '<=')
      );
    }
  }

  function op_simple($field) {
    $this->query->add_having($this->options['group'], $field, $this->value['value'], $this->operator);
  }

  function op_empty($field) {
    if ($this->operator == 'empty') {
      $operator = "IS NULL";
    }
    else {
      $operator = "IS NOT NULL";
    }

    $this->query->add_having($this->options['group'], $field, NULL, $operator);
  }

  function ui_name() {
    return $this->get_field(parent::ui_name());
  }
}

