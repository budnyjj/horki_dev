<?php print $doctype; ?>
<html xmlns:og="https://ogp.me/ns#" lang="ru" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>

<link rel="preload" as="font" type="font/woff2" href="/sites/all/themes/horki2/fonts/PTSans/ptc55.woff2" crossorigin>
<link rel="preload" as="font" type="font/woff2" href="/sites/all/themes/horki2/fonts/PTSans/ptc75.woff2" crossorigin>
<link rel="preload" as="font" type="font/woff2" href="/sites/all/themes/horki2/fonts/PTSans/pts55.woff2" crossorigin>
<link rel="preload" as="font" type="font/woff2" href="/sites/all/themes/horki2/fonts/PTSans/pts75.woff2" crossorigin>
<link rel="preload" as="font" type="font/woff2" href="/sites/all/themes/horki2/fonts/PTSerif/ptf55.woff2" crossorigin>
<link rel="preload" as="font" type="font/woff2" href="/sites/all/themes/horki2/fonts/PTSerif/ptf75.woff2" crossorigin>

<link rel="preload" as="image" type="image/svg+xml" href="/sites/default/files/icons/social/viber.svg">
<link rel="preload" as="image" type="image/svg+xml" href="/sites/default/files/icons/social/instagram.svg">
<link rel="preload" as="image" type="image/svg+xml" href="/sites/default/files/icons/social/ok.svg">
<link rel="preload" as="image" type="image/svg+xml" href="/sites/default/files/icons/social/vk.svg">
<link rel="preload" as="image" type="image/svg+xml" href="/sites/default/files/icons/social/facebook.svg">
<link rel="preload" as="image" type="image/svg+xml" href="/sites/default/files/icons/social/mail.svg">

<?php print $head; ?>
<title><?php print $head_title; ?></title>  

<link rel="apple-touch-icon" sizes="180x180" href="/apple-touch-icon.png">
<link rel="icon" type="image/png" sizes="32x32" href="/favicon-32x32.png">
<link rel="icon" type="image/png" sizes="16x16" href="/favicon-16x16.png">
<link rel="manifest" href="/site.webmanifest">
<link rel="mask-icon" href="/safari-pinned-tab.svg" color="#d11f26">
<meta name="msapplication-TileColor" content="#505050">
<meta name="theme-color" content="#ffffff">

<meta name="google-site-verification" content="I50q2z2FdQZMKZ_SPHbi7dyjnjn7FD4wLkfEWkks0ZI" />
<meta name="google-site-verification" content="mc_80mJ1g2ulo7wFCZyPg9_tfUYANmS7OCbKrLypEKg" />
<meta name="yandex-verification" content="d4b6a64cdf423497" />
<meta name="zen-verification" content="BMLd9XI4bgryveU7qS41P9yaswPBYmpERid1asvQVajcXLGNyV1bUab7tcPBY8km" />
<meta name='wmail-verification' content='88f1db5a9ded957fc2182fc09c649234' />
<meta property="fb:pages" content="140208249349033" />

<?php print $styles; ?>

<!--[if lt IE 9]><script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->

<!-- Google Analytics -->
<script async src="https://www.googletagmanager.com/gtag/js?id=G-HVY7K8R99X"></script>
<script>
  window.dataLayer = window.dataLayer || [];
  function gtag(){dataLayer.push(arguments);}
  gtag('js', new Date());
 
  gtag('config', 'G-HVY7K8R99X');
  gtag('config', 'G-HF2Q7NE3TZ');
</script>

<!-- Yandex.Metrika -->
<script type="text/javascript" >
   (function(m,e,t,r,i,k,a){m[i]=m[i]||function(){(m[i].a=m[i].a||[]).push(arguments)};
   m[i].l=1*new Date();k=e.createElement(t),a=e.getElementsByTagName(t)[0],k.async=1,k.src=r,a.parentNode.insertBefore(k,a)})
   (window, document, "script", "https://mc.yandex.ru/metrika/tag.js", "ym");

   ym(21451765, "init", {
        clickmap:true,
        trackLinks:true,
        accurateTrackBounce:true
   });
</script>
<noscript><div><img src="https://mc.yandex.ru/watch/21451765" style="position:absolute; left:-9999px;" alt="" /></div></noscript>

<!-- Google AdSense -->
<script async src="//pagead2.googlesyndication.com/pagead/js/adsbygoogle.js"></script>
<script>
  (adsbygoogle = window.adsbygoogle || []).push({
    google_ad_client: "ca-pub-7674021519504941",
    enable_page_level_ads: true
  });
</script>

<!-- Yandex.Direct -->
<script>window.yaContextCb = window.yaContextCb || []</script>
<script async src="//yandex.ru/ads/system/context.js"></script>

<!-- SendPulse -->
<script async charset="UTF-8" src="//web.webpushs.com/js/push/2d160ca9896cdd7e019723312a219d56_1.js"></script>

</head>
<body<?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
 
  <?php print $scripts; ?>
  <?php print $page_bottom; ?>
</body>
</html>
