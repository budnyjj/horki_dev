<article<?php print $attributes; ?>>
  <?php print $user_picture; ?>
  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
  <header>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
  </header>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($display_submitted): ?>
	<footer class="submitted"><?php print date("d.m.Y", $node->published_at); ?> &ndash; <?php print date("H:i", $node->published_at); ?> 

  	<?php if ($page): ?> 
  	      <?php if ($node_views_cntr): ?>
	      	    <span class="by-readers-delimiter">|</span>
	      	    <?php print $node_views_cntr; ?>
  	      <?php endif; ?>
  	      <?php if ($node_comments_cntr): ?>
	      	    <span class="by-readers-delimiter">|</span>
	      	    <?php print $node_comments_cntr; ?>
  	      <?php endif; ?>
  	<?php endif; ?>
	</footer>
  <?php endif; ?>  
  
  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>

  <div class="clearfix">
    <?php if($view_mode != 'teaser') {
	if (!empty($content['links'])): ?> 
	  <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>
	 <?php }; ?>

	

    <?php print render($content['comments']); ?>
  </div>
</article>
