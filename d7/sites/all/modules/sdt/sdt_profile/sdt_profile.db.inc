<?php

function sdt_profile_get_member($uid){
	
	try {
		$result = db_select("sdt_profiles","a")
					->condition("a.uid",$uid)
					->fields("a",array("batch_year","batch_spec","school","first_name","last_name"))
					->execute();
		return $result->fetchObject();
	}catch(Exception $e){
		watchdog("sdt","Unable to fetch sdt member profile: %message",
			array("%message"=>$e->getMessage()),WATCHDOG_ERROR);
		return NULL;
	}
	
}

function sdt_profile_add_member($uid,$first,$last,$batch_year,$batch_specifier,$school){
	
	$txn = db_transaction();
	try {
	
		db_insert("sdt_profiles")
			->fields(array(
				"uid"=>$uid,
				"batch_year"=>$year,
				"batch_spec"=>$batch_specifier,
				"school"=>$school,
				"first_name"=>$first,
				"last_name"=>$last))
			->execute();
		$txn->commit();
	}catch(Exception $e){
		$txn->rollback();
		watchdog("sdt","Unable to add sdt member profile: %message",
			array("%message"=>$e->getMessage()),WATCHDOG_ERROR);
	}
	
}

function sdt_profile_update_member($uid,$first,$last,$batch_year,$batch_specifier,$school){
	
	$txn = db_transaction();
	try {
		db_update("sdt_profiles")
			->fields(array(
				"batch_year"=>$batch_year,
				"batch_spec"=>$batch_specifier,
				"school"=>$school,
				"first_name"=>$first,
				"last_name"=>$last))
			->condition("uid",$uid)
			->execute();
		$txn->commit();
	}catch(Exception $e){
		$txn->rollback();
		watchdog("sdt","Unable to update sdt member profile: %message",
			array("%message"=>$e->getMessage()),WATCHDOG_ERROR);
	}	
}