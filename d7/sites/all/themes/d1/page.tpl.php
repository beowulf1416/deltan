<?php
print render($page['header']);
?>

  <div id="wrapper">
    <div id="container" class="clearfix">
    
    	<div id="header">
    	</div> <!-- /#header -->
    	
    	<div id="content">
    		<div id="content-messages">
    			<?php print $messages; ?>
    		</div>	<!-- /#content-messages -->
    		<?php print render($page['content']); ?>
    	</div> <!-- /#content -->
    	
    	<div id="footer">
    	</div>	<!-- /#footer -->

    </div> <!-- /#container -->
  </div> <!-- /#wrapper -->
