<?php
function sdt_profile_add_member($uid,$first,$last,$batch_year,$batch_specifier,$school){
	
	db_insert("sdt_profiles")
		->fields(array(
			"uid"=>$uid,
			"batch_year"=>$year,
			"batch_spec"=>$batch_specifier,
			"school"=>$school,
			"first_name"=>$first,
			"last_name"=>$last))
		->execute();
	
}

function sdt_profile_update_member($uid,$first,$last,$batch_year,$batch_specifier,$school){
	
	db_update("sdt_profiles")
		->fields(array(
			"batch_year"=>$batch_year,
			"batch_spec"=>$batch_specifier,
			"school"=>$school,
			"first_name"=>$first,
			"last_name"=>$last))
		->condition("uid",$uid)
		->execute();
	
}