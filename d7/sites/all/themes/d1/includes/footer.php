<?php
?>
<div id="footer-container">
	<div class="footer-text"><?php print(t("sigma delta tau fraternity/sorority")); ?></div>
	<div class="footer-text"><?php print(t("copyright 2010")); ?></div>
	<?php if($site_mail){ ?>
	<div class="footer-text"><?php print(l($site_mail,"contact")); ?></div>
	<?php } // $site_mail?>
</div><!-- /#footer -->