<?php
?>

  <div id="wrapper">
    <div id="container" class="clearfix">
    
    	<div id="header">
    		<h1>Header</h1>
			<?php print(render($page["header"])); ?>
    	</div> <!-- /#header -->

		<div id="center">

			<?php if(!$is_front){ ?>		 	
		 	<div id="sidebarleft">
		 		<h1>Left</h1>
		 		<?php 
		 		if($page["left"]){
		 			print(render($page["left"]));
		 		}
		 		?>
		 	</div> <!-- /#sidebarleft -->
		 	<?php } // $is_front ?>
		 	
	    	<div id="content">
	    		<div id="content-messages">
	    			<?php print $messages; ?>
	    		</div>	<!-- /#content-messages -->
	    		<?php print(render($page["content"])); ?>
	    	</div> <!-- /#content -->
	    	
	    	<div id="sidebarright">
	    		<h1>Right</h1>
	    		<?php print(render($page["right"])); ?>
	    	</div> <!-- /#sidebarright -->
	    	
	    	<div class="clearfix"></div>
	    	
	    </div> <!-- /#center -->
    	
    	<div id="footer">
    		<?php 
    		print(render($page["footer"])); 
    		include("$directory/includes/footer.php");
    		?>
    	</div>	<!-- /#footer -->

    </div> <!-- /#container -->
  </div> <!-- /#wrapper -->
