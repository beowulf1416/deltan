<?php
//<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
?>
<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $language->language ?>" xml:lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
<head>
  <meta http-equiv="Content-Style-Type" content="text/css" />
  <?php print $head ?>
  <title><?php print $head_title ?></title>
  <?php print $styles ?>
  <?php print $scripts ?>
</head>
<body>
	
  <div id="wrapper">
    <div id="container" class="clearfix">

    </div> <!-- /#container -->
  </div> <!-- /#wrapper -->
	
<?php print $closure;?>
</body>
</html>