var pp_gemius_identifier = '.FuVJrfD0SLzrGxzLutoYre976b8joLyu6XDUVRV1vD.m7';
// lines below shouldn't be edited
function gemius_pending(i) { 
    window[i] = window[i] || function() {
	var x = window[i+'_pdata'] = window[i+'_pdata'] || []; 
	x[x.length]=arguments;
    };
};

gemius_pending('gemius_hit');
gemius_pending('gemius_event'); 
gemius_pending('pp_gemius_hit'); 
gemius_pending('pp_gemius_event');

(function(d,t) {
    try {
	var gt=d.createElement(t), s=d.getElementsByTagName(t)[0], l='http'+((location.protocol=='https:')?'s':'');
	gt.setAttribute('async','async');
	gt.setAttribute('defer','defer');
	gt.src=l+'://gaby.hit.gemius.pl/xgemius.js'; 
	s.parentNode.insertBefore(gt,s);
    } catch (e) {}
})(document,'script');