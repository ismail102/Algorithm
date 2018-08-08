<!DOCTYPE html>
<!-- saved from url=(0033)http://www.spoj.com/problems/MUL/ -->
<html class="not-ie" lang="en"><!--<![endif]--><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
	<!-- main header -->
	
	
				<title>SPOJ.com - Problem MUL</title>
		  
	<meta name="keywords" content="language, algorithm, spoj, contest, contester, Java, C#, Pascal, C, C++, python, ruby, caml, ocaml, perl, haskell, lisp, prolog, fortran, assembler, asembler, functional, online, judge, problem, problemset, ACM">
  	<meta name="viewport" content="width=device-width, initial-scale=1.0">
  
  		<meta property="og:title" content="SPOJ.com - Problem MUL">
    <meta property="fb:app_id" content="321676846207">
	<meta property="og:type" content="spoj-pl:problem">
	<meta property="og:url" content="http://www.spoj.com/problems/MUL/">
	<meta property="og:image" content="//stx1.spoj.com/gfx/logo-cr.png">
	<meta property="og:description" content="...">
	<meta name="description" content="...">
		<meta property="og:site_name" content="spoj.com">

  <!--[if (gte IE 9)|!(IE)]>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" id="metatag">
  <![endif]--> 

	  <!-- Favicon -->
	  <link href="http://stx1.spoj.com/gfx/favicon_new.png" rel="shortcut icon" type="image/x-icon">
	  
	  <!-- RSS -->
	  <link href="http://www.spoj.com/rss/" rel="alternate" type="application/rss+xml" title="RSS Feed">
	
	  <!-- Web Fonts -->
	  <link href="./MUL - Fast Multiplication_files/css" rel="stylesheet" type="text/css">  

	<!-- Internet Explorer condition - HTML5 shim, for IE6-8 support of HTML5 elements -->
	<!--[if lt IE 9]>
		<script src="http://html5shim.googlecode.com/svn/trunk/html5.js"></script>
	<![endif]--> 
	
	
	
	<!-- CSS: Bootstrap, Font-awesome, Bootstrap libs,  -->
	<link href="./MUL - Fast Multiplication_files/bootstrap.min.css" rel="stylesheet">
  	<link href="./MUL - Fast Multiplication_files/font-awesome.min.css" rel="stylesheet">
  	<link href="./MUL - Fast Multiplication_files/bootstrap-tour.min.css" rel="stylesheet">
  	<link href="./MUL - Fast Multiplication_files/bootstrap-social.css" rel="stylesheet" type="text/css">
  	
	<link href="./MUL - Fast Multiplication_files/common.css" rel="stylesheet" type="text/css" id="theme0">
	<link href="./MUL - Fast Multiplication_files/en_new.css" rel="stylesheet" type="text/css" id="theme">
	
	<!-- JS -->
	<script type="text/javascript" async="" src="./MUL - Fast Multiplication_files/linkid.js"></script><script async="" src="./MUL - Fast Multiplication_files/analytics.js"></script><script id="facebook-jssdk" src="./MUL - Fast Multiplication_files/sdk.js"></script><script type="text/javascript" src="./MUL - Fast Multiplication_files/jquery-1.11.1.min.js"></script>
	<script type="text/javascript" src="./MUL - Fast Multiplication_files/jquery-ui.min.js"></script>
	
		
		
	<script type="text/javascript" language="javascript">
	$(function () { 
		$("#profile-menu").popover();
	});
	function UnCryptMailto(s) {
		var n=0;
		var r="";
		for(var i=0;i<s.length;i++) {		
			n=s.charCodeAt(i); 
			if (n>=8364) {n = 128;}
			r += String.fromCharCode(n+(2));	
		}
		return r;
	}
	function linkTo_UnCryptMailto(s)	{
		location.href=UnCryptMailto(s);
	}
	</script>
	
	<script type="text/javascript">
	function recordOutboundLink(link, category, action) {
	  try {
	    var pageTracker=_gat._getTracker("UA-XXXXX-X");
	    pageTracker._trackEvent(category, action);
	    setTimeout('document.location = "' + link.href + '"', 100)
	  }catch(err){}
	}
	</script>
	
<script async="" src="./MUL - Fast Multiplication_files/hotjar-334656.js"></script><script async="" src="./MUL - Fast Multiplication_files/modules-b9d413cfd2f87f7f76ffb080ac50a079.js"></script><style type="text/css">iframe#_hjRemoteVarsFrame {display: none !important; width: 1px !important; height: 1px !important; opacity: 0 !important; pointer-events: none !important;}</style><style type="text/css">.fb_hidden{position:absolute;top:-10000px;z-index:10001}.fb_reposition{overflow:hidden;position:relative}.fb_invisible{display:none}.fb_reset{background:none;border:0;border-spacing:0;color:#000;cursor:auto;direction:ltr;font-family:"lucida grande", tahoma, verdana, arial, sans-serif;font-size:11px;font-style:normal;font-variant:normal;font-weight:normal;letter-spacing:normal;line-height:1;margin:0;overflow:visible;padding:0;text-align:left;text-decoration:none;text-indent:0;text-shadow:none;text-transform:none;visibility:visible;white-space:normal;word-spacing:normal}.fb_reset>div{overflow:hidden}.fb_link img{border:none}@keyframes fb_transform{from{opacity:0;transform:scale(.95)}to{opacity:1;transform:scale(1)}}.fb_animate{animation:fb_transform .3s forwards}
.fb_dialog{background:rgba(82, 82, 82, .7);position:absolute;top:-10000px;z-index:10001}.fb_reset .fb_dialog_legacy{overflow:visible}.fb_dialog_advanced{padding:10px;border-radius:8px}.fb_dialog_content{background:#fff;color:#333}.fb_dialog_close_icon{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 0 transparent;cursor:pointer;display:block;height:15px;position:absolute;right:18px;top:17px;width:15px}.fb_dialog_mobile .fb_dialog_close_icon{top:5px;left:5px;right:auto}.fb_dialog_padding{background-color:transparent;position:absolute;width:1px;z-index:-1}.fb_dialog_close_icon:hover{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 -15px transparent}.fb_dialog_close_icon:active{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 -30px transparent}.fb_dialog_loader{background-color:#f6f7f9;border:1px solid #606060;font-size:24px;padding:20px}.fb_dialog_top_left,.fb_dialog_top_right,.fb_dialog_bottom_left,.fb_dialog_bottom_right{height:10px;width:10px;overflow:hidden;position:absolute}.fb_dialog_top_left{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/ye/r/8YeTNIlTZjm.png) no-repeat 0 0;left:-10px;top:-10px}.fb_dialog_top_right{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/ye/r/8YeTNIlTZjm.png) no-repeat 0 -10px;right:-10px;top:-10px}.fb_dialog_bottom_left{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/ye/r/8YeTNIlTZjm.png) no-repeat 0 -20px;bottom:-10px;left:-10px}.fb_dialog_bottom_right{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/ye/r/8YeTNIlTZjm.png) no-repeat 0 -30px;right:-10px;bottom:-10px}.fb_dialog_vert_left,.fb_dialog_vert_right,.fb_dialog_horiz_top,.fb_dialog_horiz_bottom{position:absolute;background:#525252;filter:alpha(opacity=70);opacity:.7}.fb_dialog_vert_left,.fb_dialog_vert_right{width:10px;height:100%}.fb_dialog_vert_left{margin-left:-10px}.fb_dialog_vert_right{right:0;margin-right:-10px}.fb_dialog_horiz_top,.fb_dialog_horiz_bottom{width:100%;height:10px}.fb_dialog_horiz_top{margin-top:-10px}.fb_dialog_horiz_bottom{bottom:0;margin-bottom:-10px}.fb_dialog_iframe{line-height:0}.fb_dialog_content .dialog_title{background:#6d84b4;border:1px solid #365899;color:#fff;font-size:14px;font-weight:bold;margin:0}.fb_dialog_content .dialog_title>span{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yd/r/Cou7n-nqK52.gif) no-repeat 5px 50%;float:left;padding:5px 0 7px 26px}body.fb_hidden{-webkit-transform:none;height:100%;margin:0;overflow:visible;position:absolute;top:-10000px;left:0;width:100%}.fb_dialog.fb_dialog_mobile.loading{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/ya/r/3rhSv5V8j3o.gif) white no-repeat 50% 50%;min-height:100%;min-width:100%;overflow:hidden;position:absolute;top:0;z-index:10001}.fb_dialog.fb_dialog_mobile.loading.centered{width:auto;height:auto;min-height:initial;min-width:initial;background:none}.fb_dialog.fb_dialog_mobile.loading.centered #fb_dialog_loader_spinner{width:100%}.fb_dialog.fb_dialog_mobile.loading.centered .fb_dialog_content{background:none}.loading.centered #fb_dialog_loader_close{color:#fff;display:block;padding-top:20px;clear:both;font-size:18px}#fb-root #fb_dialog_ipad_overlay{background:rgba(0, 0, 0, .45);position:absolute;bottom:0;left:0;right:0;top:0;width:100%;min-height:100%;z-index:10000}#fb-root #fb_dialog_ipad_overlay.hidden{display:none}.fb_dialog.fb_dialog_mobile.loading iframe{visibility:hidden}.fb_dialog_content .dialog_header{-webkit-box-shadow:white 0 1px 1px -1px inset;background:-webkit-gradient(linear, 0% 0%, 0% 100%, from(#738ABA), to(#2C4987));border-bottom:1px solid;border-color:#1d4088;color:#fff;font:14px Helvetica, sans-serif;font-weight:bold;text-overflow:ellipsis;text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0;vertical-align:middle;white-space:nowrap}.fb_dialog_content .dialog_header table{-webkit-font-smoothing:subpixel-antialiased;height:43px;width:100%}.fb_dialog_content .dialog_header td.header_left{font-size:12px;padding-left:5px;vertical-align:middle;width:60px}.fb_dialog_content .dialog_header td.header_right{font-size:12px;padding-right:5px;vertical-align:middle;width:60px}.fb_dialog_content .touchable_button{background:-webkit-gradient(linear, 0% 0%, 0% 100%, from(#4966A6), color-stop(.5, #355492), to(#2A4887));border:1px solid #29487d;-webkit-background-clip:padding-box;-webkit-border-radius:3px;-webkit-box-shadow:rgba(0, 0, 0, .117188) 0 1px 1px inset, rgba(255, 255, 255, .167969) 0 1px 0;display:inline-block;margin-top:3px;max-width:85px;line-height:18px;padding:4px 12px;position:relative}.fb_dialog_content .dialog_header .touchable_button input{border:none;background:none;color:#fff;font:12px Helvetica, sans-serif;font-weight:bold;margin:2px -12px;padding:2px 6px 3px 6px;text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0}.fb_dialog_content .dialog_header .header_center{color:#fff;font-size:16px;font-weight:bold;line-height:18px;text-align:center;vertical-align:middle}.fb_dialog_content .dialog_content{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/y9/r/jKEcVPZFk-2.gif) no-repeat 50% 50%;border:1px solid #555;border-bottom:0;border-top:0;height:150px}.fb_dialog_content .dialog_footer{background:#f6f7f9;border:1px solid #555;border-top-color:#ccc;height:40px}#fb_dialog_loader_close{float:left}.fb_dialog.fb_dialog_mobile .fb_dialog_close_button{text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0}.fb_dialog.fb_dialog_mobile .fb_dialog_close_icon{visibility:hidden}#fb_dialog_loader_spinner{animation:rotateSpinner 1.2s linear infinite;background-color:transparent;background-image:url(https://static.xx.fbcdn.net/rsrc.php/v3/yD/r/t-wz8gw1xG1.png);background-repeat:no-repeat;background-position:50% 50%;height:24px;width:24px}@keyframes rotateSpinner{0%{transform:rotate(0deg)}100%{transform:rotate(360deg)}}
.fb_iframe_widget{display:inline-block;position:relative}.fb_iframe_widget span{display:inline-block;position:relative;text-align:justify}.fb_iframe_widget iframe{position:absolute}.fb_iframe_widget_fluid_desktop,.fb_iframe_widget_fluid_desktop span,.fb_iframe_widget_fluid_desktop iframe{max-width:100%}.fb_iframe_widget_fluid_desktop iframe{min-width:220px;position:relative}.fb_iframe_widget_lift{z-index:1}.fb_hide_iframes iframe{position:relative;left:-10000px}.fb_iframe_widget_loader{position:relative;display:inline-block}.fb_iframe_widget_fluid{display:inline}.fb_iframe_widget_fluid span{width:100%}.fb_iframe_widget_loader iframe{min-height:32px;z-index:2;zoom:1}.fb_iframe_widget_loader .FB_Loader{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/y9/r/jKEcVPZFk-2.gif) no-repeat;height:32px;width:32px;margin-left:-16px;position:absolute;left:50%;z-index:4}
.fb_customer_chat_bounce_in{animation-duration:250ms;animation-name:fb_bounce_in}.fb_customer_chat_bounce_out{animation-duration:250ms;animation-name:fb_fade_out}.fb_invisible_flow{display:inherit;height:0;overflow-x:hidden;width:0}.fb_mobile_overlay_active{background-color:#fff;height:100%;overflow:hidden;position:fixed;visibility:hidden;width:100%}@keyframes fb_fade_out{from{opacity:1}to{opacity:0}}@keyframes fb_bounce_in{0%{opacity:0;transform:scale(.8, .8);transform-origin:100% 100%}10%{opacity:.1}20%{opacity:.2}30%{opacity:.3}40%{opacity:.4}50%{opacity:.5}60%{opacity:.6}70%{opacity:.7}80%{opacity:.8;transform:scale(1.03, 1.03)}90{opacity:.9}100%{opacity:1;transform:scale(1, 1)}}</style></head>

<body>

	
	<!-- <div class="space30"></div> -->
	
	<!-- Content -->
	<div class="content">
		<div class="container" id="header">
			<div class="row">
				<div class="col-md-12 text-right">
										<form method="post" style="display: none;" action="http://www.spoj.com/login/" id="login-form">
						<div class="row">
							<div class="col-md-10 col-md-offset-2">
								<input type="hidden" name="next_raw" value="/">
								<input type="hidden" name="autologin" value="1">
								<input type="text" name="login_user" placeholder="Username" class="form-control input-sm" style="display: inline-block; width: 25%;">
								<input type="password" name="password" placeholder="Password" class="form-control input-sm" style="display: inline-block; width: 25%;">
																<button type="submit" class="btn btn-default btn-sm" style="display: inline-block; margin-right: 10px;"><span class="fa fa-sign-in fa-lg"></span> <strong>sign in</strong></button>
																<a href="http://www.spoj.com/register"><i class="fa fa-user-plus"></i> sign up</a> 
								<a href="http://www.spoj.com/forgot"><i class="fa fa-question-circle"></i> forgot</a>
				        									</div>
						</div>
					</form>
										
					
				</div>
			</div>
		
			<div class="row">
				<div class="col-md-4">
					<a href="http://www.spoj.com/" class="navbar-brand">
						<img src="./MUL - Fast Multiplication_files/2015e.png" style="height: 40px;">
					</a>
					<div class="navbar-header">
				      <button class="navbar-toggle collapsed" type="button" data-toggle="collapse" data-target=".bs-navbar-collapse">
				        <span class="sr-only">Toggle navigation</span>
				        <i class="fa fa-bars"></i>
				      </button>
				    </div>
				</div>
				<div class="col-md-8" id="menu">
				
					
					<div class="row">
					<nav class="collapse navbar-collapse bs-navbar-collapse" role="navigation" style="border: 0px;">
				      <ul class="nav navbar-nav" style="  float: right; margin-top: 10px;">
				      						        <li class="active">
					          <a href="http://www.spoj.com/problems"><i class="fa fa-puzzle-piece"></i> PROBLEMS</a>
					        </li>
					        					        <li>
					          <a href="http://www.spoj.com/status"><i class="fa fa-circle"></i> STATUS</a>
					        </li>
					        <li>
					          <a href="http://www.spoj.com/ranks"><i class="fa fa-trophy"></i> RANKS</a>
					        </li>
					        <li>
					          <a href="http://spoj.com/forum"><i class="fa fa-comments-o"></i> DISCUSS</a>
					        </li>
					        <li>
					          <a href="http://www.spoj.com/contests">CONTESTS</a>
					        </li>
											        					        <li>
					        	<a href="http://www.spoj.com/login" class="text-success" onclick="$(&#39;#login-form&#39;).show(); $(&#39;input[name=login_user]&#39;).focus(); return false;"><i class="fa fa-sign-in"></i> sign in</a>
					        </li>
					        						
				        
				      </ul>
				    </nav>
				    </div>
				    
				    
				</div>
			</div>
			
		</div>
		
		<div class="container" id="menu">
			
		</div>
		
		<div class="container" id="content">
		<script type="text/javascript" src="./MUL - Fast Multiplication_files/jquery.cxhelp2.js"></script>



 <!-- wykorzystywane w pcontent.html (by wiele) -->

<div class="submenu">
	
		<ol class="breadcrumb">
	  <li><a href="http://www.spoj.com/problems">Problems</a></li>
	  <li><a href="http://www.spoj.com/problems/classical">classical</a></li>
	  <li class="active">Fast Multiplication</li>
	</ol>
		
	<ol class="navbar-right">
						
				<li><a href="http://www.spoj.com/status/MUL/" class="">Status</a></li>
		<li><a href="http://www.spoj.com/ranks/MUL/" class="">Ranking</a></li>
	</ol>
</div>


	<script type="text/javascript">
		var number_of_voteboxes = "";
	</script>


<div class="row first-row">
	<div class="col-lg-8 col-md-8">
		<div class="prob" style="position: relative">

			<!-- google_ad_section_start -->
			<!-- plik z pomoca kontekstowa (cxhelp_*) dziedziczony po pindex.html -->



<script type="text/javascript" src="./MUL - Fast Multiplication_files/ASCIIMathMLwFallback.js"></script>
<!--script type="text/javascript" src="/gfx/jscripts/tiny_mce/plugins/asciisvg/js/ASCIIsvgPI.js"></script-->
<script type="text/javascript">
<!--
var AScgiloc = 'http://www.imathas.com/imathas/filter/graph/svgimg.php';
var AMTcgiloc = "/files/gif/";
-->
</script>


<div class="text-center"><center>
	<div class="aProblemTop c728x90"><div class="no_a_info" style="visibility: visible;"></div><script async="" src="http://pagead2.googlesyndication.com/pagead/js/adsbygoogle.js"></script>
<ins class="adsbygoogle" style="display:inline-block;width:728px;height:90px" data-ad-client="ca-pub-4453360425583535" data-ad-slot="1073332635"></ins>
<script>
(adsbygoogle = window.adsbygoogle || []).push({});
</script></div>
	</center>
</div>
<br>

<h2 id="problem-name" class="text-center">MUL - Fast Multiplication</h2>


<div class="row">
	<div id="problem-tags" class="col-lg-12 text-center">
								 
				
					<a href="http://www.spoj.com/problems/tag/simple-math"><span class=" tag-conception-paradigm- tag-link problem-tag" data-tagid="1">#simple-math<span class="fa fa-times manage-tag-ar" style="display: none"></span></span></a>
									
					<a href="http://www.spoj.com/problems/tag/recursion"><span class=" tag-algorithm-datastructure- tag-link problem-tag" data-tagid="48">#recursion<span class="fa fa-times manage-tag-ar" style="display: none"></span></span></a>
						</div>
</div>
<br>

<div id="problem-body">
	<p>Multiply the given numbers.</p>

<h3>Input</h3>
<p><em>n</em> [the number of multiplications &lt;= 1000]</p>
<p><em>l1 l2</em> [numbers to multiply (at most 10000 decimal digits each)]</p>
<p>Text grouped in [ ] does not appear in the input file.</p>

<h3>Output</h3>
<p>The results of multiplications.</p>

<h3>Example</h3>
<pre>Input:
5
4 2
123 43
324 342
0 12
9999 12345

Output:
8
5289
110808
0
123437655</pre>

<p><strong>Warning: large Input/Output data, be careful with certain languages</strong></p>
</div>

<div class="text-center">
	<a href="http://www.spoj.com/submit/MUL/" class="btn btn-primary btn-lg"><i class="fa fa-send"></i> Submit solution!</a>
</div>
			<!-- google_ad_section_end -->
			
			<div id="ccontent">
			<!-- google_ad_section_start -->
			
<hr style="clear:both;">
<a href="http://www.spoj.com/problems/MUL/#" onclick="toggleComments(); return false;"><span id="comments_sh">hide</span> comments</a><br>

<a id="comments"></a>
<table id="comments_table" width="100%">
		<tbody><tr>
		<td colspan="2">
		<ul class="pagination" style="">
			<li class="disabled"><span>&lt;</span></li>
		<li class="disabled"><span>Previous</span></li>
						<li class="active"><span>1</span></li> 
							<li><a href="http://www.spoj.com/problems/MUL/cstart=10" class="pager_link">2</a></li> 
							<li><a href="http://www.spoj.com/problems/MUL/cstart=20" class="pager_link">3</a></li> 
							<li><a href="http://www.spoj.com/problems/MUL/cstart=30" class="pager_link">4</a></li> 
							<li><a href="http://www.spoj.com/problems/MUL/cstart=40" class="pager_link">5</a></li> 
							<li><a href="http://www.spoj.com/problems/MUL/cstart=50" class="pager_link">6</a></li> 
							<li><a href="http://www.spoj.com/problems/MUL/cstart=60" class="pager_link">7</a></li> 
							<li><a href="http://www.spoj.com/problems/MUL/cstart=70" class="pager_link">8</a></li> 
							<li><a href="http://www.spoj.com/problems/MUL/cstart=80" class="pager_link">9</a></li> 
							<li><a href="http://www.spoj.com/problems/MUL/cstart=90" class="pager_link">10</a></li> 
						<li><a href="http://www.spoj.com/problems/MUL/cstart=10" class="pager_link">Next</a></li>
		<li><a href="http://www.spoj.com/problems/MUL/cstart=90" class="pager_link">&gt;</a></li>
	</ul>
		</td>
	</tr>
	<tr>
		<td colspan="2">
				</td>
	</tr>
	
	<script language="JavaScript">
	<!--
	$(document).ready(function(){
        $('.pager_link').bind('click', function(me){
                var href=$(me.currentTarget).attr('href');
		$('#ccontent').animate({opacity: 0.5},1);
                $.ajax({
                        type: "GET",
                        url: href+",ajax=1",
                        contentType: "application/x-www-form-urlencoded;charset=ISO-8859-2",
                        success: function(data){
                                $('#ccontent').html(data);
				$('#ccontent').animate({opacity: 1.0},1);
                        },
                        error: function(err){
                                alert('error');
                        }
                });
                return false;
        });
	});
	-->
	</script>
	



			
	<tr>
		<td width="50" style="vertical-align:top;">
			<img src="./MUL - Fast Multiplication_files/ab7c66714538e9f0d91de39bd276dc60">
		</td>
		<td class="comm comm_odd">
			<a href="http://www.spoj.com/users/zoyron">zoyron</a>: 
								<span style="font-size: 10px; color: #666;">2018-04-18 17:46:41</span>
		<br>
				<p>Python 5 lines, AC in one go :)</p>
						</td>
	</tr>
				
	<tr>
		<td width="50" style="vertical-align:top;">
			<img src="./MUL - Fast Multiplication_files/0250a85c6f535fccbdb839bf0b9b8e7a">
		</td>
		<td class="comm comm_even">
			<a href="http://www.spoj.com/users/ameyanator">ameyanator</a>: 
								<span style="font-size: 10px; color: #666;">2018-03-31 16:30:31</span>
		<br>
				<p>Python naam toh suna hi hoga :)</p>
						</td>
	</tr>
				
	<tr>
		<td width="50" style="vertical-align:top;">
			<img src="./MUL - Fast Multiplication_files/6d6d3c3432e400a1a8725186de8bda2e">
		</td>
		<td class="comm comm_odd">
			<a href="http://www.spoj.com/users/smit_mandavia">smit_mandavia</a>: 
								<span style="font-size: 10px; color: #666;">2017-11-28 07:00:39</span>
		<br>
				<p>do 10000 decimal means input till 10^10000 ??</p>
						</td>
	</tr>
				
	<tr>
		<td width="50" style="vertical-align:top;">
			<img src="./MUL - Fast Multiplication_files/79de2e2ac343af6715d4b9d9ac9db606">
		</td>
		<td class="comm comm_even">
			<a href="http://www.spoj.com/users/kunj_07">kunj_07</a>: 
								<span style="font-size: 10px; color: #666;">2017-11-24 17:01:46</span>
		<br>
				<p>&lt;snipped&gt;
<br>It showing NZEC Error..
<br>I'm new to Competitive Programming..
<br>Can anyone Help Me?</p>
				<b>Last edit: 2017-11-24 18:50:58</b>
						</td>
	</tr>
				
	<tr>
		<td width="50" style="vertical-align:top;">
			<img src="./MUL - Fast Multiplication_files/3163e302b29ff729573802de86358caa">
		</td>
		<td class="comm comm_odd">
			<a href="http://www.spoj.com/users/prabhat236218">prabhat236218</a>: 
								<span style="font-size: 10px; color: #666;">2017-10-18 05:47:15</span>
		<br>
				<p>simple in java ,  you can use BigInteger for multiplication.</p>
						</td>
	</tr>
				
	<tr>
		<td width="50" style="vertical-align:top;">
			<img src="./MUL - Fast Multiplication_files/68c6c07b0244c55d483fd2b0d744850a">
		</td>
		<td class="comm comm_even">
			<a href="http://www.spoj.com/users/studyfather">studyfather</a>: 
								<span style="font-size: 10px; color: #666;">2017-07-22 12:24:46</span>
		<br>
				<p>use c++ and get TLE... :(
<br>Must I use Python to get AC?</p>
						</td>
	</tr>
				
	<tr>
		<td width="50" style="vertical-align:top;">
			<img src="./MUL - Fast Multiplication_files/f32a55c6bbecaad3319c71335a5a9403">
		</td>
		<td class="comm comm_odd">
			<a href="http://www.spoj.com/users/rospython">rospython</a>: 
								<span style="font-size: 10px; color: #666;">2017-07-07 08:39:46</span>
		<br>
				<p>use oaf array is succesful or not
<br></p>
						</td>
	</tr>
				
	<tr>
		<td width="50" style="vertical-align:top;">
			<img src="./MUL - Fast Multiplication_files/31cef19ba1f8e465128112556e6e0f9b">
		</td>
		<td class="comm comm_even">
			<a href="http://www.spoj.com/users/sandeep_4141">sandeep_4141</a>: 
								<span style="font-size: 10px; color: #666;">2017-06-19 19:05:08</span>
		<br>
				<p>python3  0.16sec  5 line code!!
<br>mine 100th!!</p>
				<b>Last edit: 2017-06-19 19:12:04</b>
						</td>
	</tr>
				
	<tr>
		<td width="50" style="vertical-align:top;">
			<img src="./MUL - Fast Multiplication_files/939963e4a499a1b728973b9d5bc9026b">
		</td>
		<td class="comm comm_odd">
			<a href="http://www.spoj.com/users/abhay676">abhay676</a>: 
								<span style="font-size: 10px; color: #666;">2017-06-10 20:01:56</span>
		<br>
				<p>
<br></p>
				<b>Last edit: 2017-06-10 20:02:07</b>
						</td>
	</tr>
				
	<tr>
		<td width="50" style="vertical-align:top;">
			<img src="./MUL - Fast Multiplication_files/8cdb2804fb86c112e67267d3bf1ff653">
		</td>
		<td class="comm comm_even">
			<a href="http://www.spoj.com/users/newbie_127">newbie_127</a>: 
								<span style="font-size: 10px; color: #666;">2017-05-20 21:10:17</span>
		<br>
				<p>0.66 in CPP14 using boost (15 Lines)
<br>0.14 in python 2.7 (5 Lines)</p>
						</td>
	</tr>
			
</tbody></table>


<script language="javascript" type="text/javascript">
<!--
function getCookieVal (offset) {
        var endstr = document.cookie.indexOf (";", offset);
        if (endstr == -1) { 
                endstr = document.cookie.length; 
        }
        return unescape(document.cookie.substring(offset, endstr));
}

function GetCookie (name) {
  var arg = name + "=";
  var alen = arg.length;
  var clen = document.cookie.length;
  var i = 0;
  while (i < clen) {
    var j = i + alen;
    if (document.cookie.substring(i, j) == arg) {
      return getCookieVal (j);
      }
    i = document.cookie.indexOf(" ", i) + 1;
    if (i == 0) break; 
    }
  return null;
}

function toggleComments() {
        var a = document.getElementById('comments_table');
        var d = a.style.display;
        if( d == "" || d == "block" ){
                d = "none";
                document.getElementById('comments_sh').innerHTML = 'show';
        } else {
                d = "block";
                document.getElementById('comments_sh').innerHTML = 'hide';
        }
        a.style.display = d;
        document.cookie="comments_table="+d+"; path=/;";
}

if( GetCookie('comments_table') == 'none' ){
        document.getElementById('comments_sh').innerHTML = 'show';
        document.getElementById('comments_table').style.display = 'hide';
}

-->
</script>


			<!-- google_ad_section_end -->
			</div>
			<table width="100%">
        </table>
<br>
		</div>
	</div><!-- endof col-lg-8 col-md-8 -->
	
	<div class="col-lg-4 col-md-4">
	
				<div id="problem-btn-submit-box">
			<a href="http://www.spoj.com/submit/MUL/" id="problem-btn-submit" class="btn btn-primary" style="width: 100%; margin-bottom: 20px;"><i class="fa fa-send"></i> Submit solution!</a>
		</div>
				
		<table border="0" cellspacing="0" cellpadding="0" style="margin-bottom:10px" class="probleminfo" id="problem-meta">
			<colgroup>
				<col width="120">
				<col>
			</colgroup>
			<tbody>
			<tr><td>Added by:</td><td><a href="http://www.spoj.com/users/deren">Darek Dereniowski</a></td></tr>
			<tr><td>Date:</td><td>2004-06-01</td></tr>
			<tr><td>Time limit:</td><td>1.649s
			</td></tr>
			<tr><td>Source limit:</td><td>50000B</td></tr>
						<tr><td>Memory limit:</td><td>1536MB</td></tr>
										<tr>
					<td>Cluster:</td>
					<td>
													<a href="http://www.spoj.com/clusters/" target="_blank">Cube (Intel G860)</a>
								
					</td>
				</tr>
						<tr><td>Languages:</td><td>All </td></tr>
			<tr><td>Resource:</td><td>PAL</td></tr>													</tbody>
		</table>

		<div class="right-box-hehe">
			<script async="" src="http://pagead2.googlesyndication.com/pagead/js/adsbygoogle.js"></script>
<!-- spoj_problem_336x280_right2 -->
<ins class="adsbygoogle" style="display:inline-block;width:336px;height:280px" data-ad-client="ca-pub-4453360425583535" data-ad-slot="3836605032"></ins>
<script>
(adsbygoogle = window.adsbygoogle || []).push({});
</script>
		</div>
	
		<!-- BEGIN: Voting for problem -->
		
				
		<!-- END: Voting the problem -->
		
		<div class="right-box-hehe">
							<div class="c336x280"><script async="" src="http://pagead2.googlesyndication.com/pagead/js/adsbygoogle.js"></script>
	<!-- spoj_problem_336x280_right -->
	<ins class="adsbygoogle" style="display:inline-block;width:336px;height:280px" data-ad-client="ca-pub-4453360425583535" data-ad-slot="7873511834"></ins>
							<script>
							(adsbygoogle = window.adsbygoogle || []).push({});
	</script></div>
						<br>
		</div>
		
				
		
		<script type="text/javascript">
			function callback_after_vote(type, data)
			{
				var response = $.parseJSON(data);
				manage_vote_interface(type);
				//.html('<div class="vote-thank-you">Thank you!</div>');
				

				if (type == "problem" || type == "implementation") {
					var progressBarValue = Math.round(2 + 98 * response.avg / 3);
					var progressBarType;
					if (progressBarValue < 25) progressBarType = "progress-bar-primary";
					else if (progressBarValue < 50) progressBarType = "progress-bar-success";
					else if (progressBarValue < 75) progressBarType = "progress-bar-warning";
					else progressBarType = "progress-bar-danger";
					
					$("#rate-" + type + "-box .progress-bar").css("width", progressBarValue.toString() +"%");
					$("#rate-" + type + "-box .progress-bar").attr("aria-valuenow", progressBarValue.toString());
					$("#rate-" + type + "-box .progress-bar").attr("class", "progress-bar " + progressBarType);
					$("#rate-" + type + "-box .progress-value").html(progressBarValue.toString() +"%");
				}
				else if (type == "quality") {
					var quality_plus = response.sum_plus;
					var quality_minus = response.sum_minus;

					var box_content = '';

					if (quality_plus > 0 || quality_minus > 0) {
						if (quality_plus > 0) {
							box_content += '<font size="+2"><span class="label label-success">' +
								quality_plus.toString() + 
								' <span class="fa fa-thumbs-o-up"></span></span></font>';
						}
						if (quality_minus > 0) {
							box_content += '<font size="+2"><span class="label label-danger">' +
								quality_minus.toString() + 
								' <span class="fa fa-thumbs-o-down"></span></span></font>';
						}
					}

					$( "#rate-" + type + "-box" ).empty().html(box_content);
				}

				// update count
				if (response.update_count == 1) {
					var count = parseInt($("#votes_count").html(), 10);
					count++;
					var votes_word = " vote";
					if (count > 1) votes_word += "s";
					$("#votes_count").empty().html(count.toString() + votes_word);
				}
			}
			$( ".rate-btn" ).click(function() {
				var rate_type = $(this).attr('data-rate-type').toString();
				var rate_type_full = "";
				var rate = $(this).attr('data-rate').toString();
				if (rate_type == "p") rate_type_full = "problem";
				else if (rate_type == "i") rate_type_full = "implementation";
				else if (rate_type == "q") rate_type_full = "quality";
				$.get( '/?a=vote&pid=31&t=' + rate_type + '&r=' + rate, function( data ) {
				  callback_after_vote(rate_type_full, data);
				});
			});
			function manage_vote_interface(type) {
				number_of_voteboxes--;
				/*
				if (number_of_voteboxes == 0) {
					$( "#vote-box" ).fadeOut(1500, function() {
						$(this).remove();
					});
				} else {
					$( "#vote-" + type + "-box" ).fadeOut(1500, function() {
						$(this).remove();
					});
				}
				*/
				var n = $('.vote-thank-you').length;
				var offset = (n * 60).toString() + "px";
				$(document.body).append(
					'<div class="vote-thank-you" style="margin: 40%;">' +
					'<div class="alert alert-success" style="position: fixed; top: '+offset+';">' +
					'<strong>Thank you for voting!</strong>' +				
					'</div></div>');
				setTimeout(function(){$( ".vote-thank-you" ).fadeOut(1500, function() {
					$(this).remove();
				});},2000);
			}
		</script>
		
		
	</div><!-- endof col-lg-4 col-md-4 -->
</div>






<style>
ul.list-unstyled li{
	margin-bottom: 5px;
}
ul.list-unstyled li a.btn{
	width: 100%;
}
ul.ui-autocomplete{
	z-index: 10000;
	width: 200px !important;
}
</style>
	<br>
</div>
		
		
		<div class="container" id="footer">
			<div class="row">
				<div class="col-md-2">
					
				</div>
				<div class="col-md-8 text-center">
					<a href="http://www.spoj.com/info">About</a> | <a href="http://www.spoj.com/tutorials">Tutorial</a> | <a href="http://www.spoj.com/tools">Tools</a> | <a href="http://www.spoj.com/clusters">Clusters</a> | <a href="http://www.spoj.com/credits">Credits</a> | <a href="http://www.spoj.com/jobs">Jobs</a> | <a href="http://www.spoj.com/sphereengine">API</a> | <a href="http://www.spoj.com/gfx/spoj-terms.pdf" target="_blank">Terms</a>
				</div>
				<div class="col-md-2 text-right">
					<a href="http://www.spoj.com/rss/"><img src="./MUL - Fast Multiplication_files/rss10x10.gif" border="0">&nbsp;RSS</a>&nbsp;
				</div>
			</div>
		</div>
		
		<div class="text-center" id="footer-srl">
			
	© Spoj.com. All Rights Reserved. Spoj uses <a href="http://sphere-engine.com/?utm_campaign=permanent&amp;utm_medium=footer&amp;utm_source=spoj" style="color:black">Sphere Engine</a>™ © by <a href="http://sphere-research.com/?utm_campaign=permanent&amp;utm_medium=footer&amp;utm_source=spoj" style="color:black">Sphere Research Labs</a>.

		</div> 
	</div>

	<!-- JavaScripts -->
	
		
	
	<script type="text/javascript">
	$(function(){
		setTimeout(function(){
			$('.no_a_info').css('visibility', 'visible');
		}, 5000);
		
		if(!$('.aProblemTop').length && !$('.aProblemsTop').length && !$('.aSubmitTop').length && !$('.aStatusTop').length && !$('.aMainRight').length){
			ga('send', 'event', 'ads', 'no-ads', 'main-contest');
		}
		if ($('.aProblemTop').height() == 0){
			$('.aProblemTop').css({'border': '1px solid #ddd', 'background': '#f0f4e3', 'height': 90});
			$('.aProblemTop').html($('<p class="text-center">using adblock?</p><h4 class="text-center">Online ads help us to maintain site.</h4><p class="text-center"><strong>please whitelist *.spoj.com</strong></p>'));
			ga('send', 'event', 'ads', 'adblock2', 'aProblemTop');
		}
		if ($('.aProblemsTop').height() == 0){
			ga('send', 'event', 'ads', 'adblock2', 'aProblemsTop');
		}
		if ($('.aSubmitTop').height() == 0){
			ga('send', 'event', 'ads', 'adblock2', 'aSubmitTop');
		}
		if ($('.aStatusTop').height() == 0){
			ga('send', 'event', 'ads', 'adblock2', 'aStatusTop');
		}
		if ($('.aMainRight').height() == 0){
			ga('send', 'event', 'ads', 'adblock2', 'aMainRight');
		}
	});
	</script>
	
	
	<script type="text/javascript" src="./MUL - Fast Multiplication_files/jquery.timers.js"></script>
	<script type="text/javascript" src="./MUL - Fast Multiplication_files/jquery.cookie.js"></script>
	
	<script src="./MUL - Fast Multiplication_files/bootstrap.min.js"></script>

	<script src="./MUL - Fast Multiplication_files/md5.js"></script>
	<script src="./MUL - Fast Multiplication_files/bootstrap-tour.min.js"></script>
	<script src="./MUL - Fast Multiplication_files/tour.js"></script>
	
	
	<div id="fb-root" class=" fb_reset"><div style="position: absolute; top: -10000px; height: 0px; width: 0px;"><div><iframe name="fb_xdm_frame_http" frameborder="0" allowtransparency="true" allowfullscreen="true" scrolling="no" allow="encrypted-media" id="fb_xdm_frame_http" aria-hidden="true" title="Facebook Cross Domain Communication Frame" tabindex="-1" src="./MUL - Fast Multiplication_files/JW5GlLnAsFw.html" style="border: none;"></iframe><iframe name="fb_xdm_frame_https" frameborder="0" allowtransparency="true" allowfullscreen="true" scrolling="no" allow="encrypted-media" id="fb_xdm_frame_https" aria-hidden="true" title="Facebook Cross Domain Communication Frame" tabindex="-1" src="./MUL - Fast Multiplication_files/JW5GlLnAsFw(1).html" style="border: none;"></iframe></div></div><div style="position: absolute; top: -10000px; height: 0px; width: 0px;"><div></div></div></div>
	<script>(function(d, s, id) {
	  var js, fjs = d.getElementsByTagName(s)[0];
	  if (d.getElementById(id)) return;
	  js = d.createElement(s); js.id = id;
	  js.src = "//connect.facebook.net/pl_PL/sdk.js#xfbml=1&appId=321676846207&version=v2.0";
	  fjs.parentNode.insertBefore(js, fjs);
	}(document, 'script', 'facebook-jssdk'));</script>
	
	


<script>
	  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
	  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
	  m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
	  })(window,document,'script','//www.google-analytics.com/analytics.js','ga');
	  ga('create', 'UA-10507872-1', 'auto');
	  ga('require', 'linkid', 'linkid.js');
	  ga('send', 'pageview');
	</script>
<!-- Hotjar Tracking Code for http://www.spoj.com -->
<script>
    (function(h,o,t,j,a,r){
        h.hj=h.hj||function(){(h.hj.q=h.hj.q||[]).push(arguments)};
        h._hjSettings={hjid:334656,hjsv:5};
        a=o.getElementsByTagName('head')[0];
        r=o.createElement('script');r.async=1;
        r.src=t+h._hjSettings.hjid+j+h._hjSettings.hjsv;
        a.appendChild(r);
    })(window,document,'//static.hotjar.com/c/hotjar-','.js?sv=');
</script>
<script type="text/javascript">
	$(function(){
		$(document).on('click', '.track', function(){
			var event = $(this).attr('data-event');
			var action = $(this).attr('data-action');
			var value = $(this).attr('data-value');
			ga('send', 'event', event, action, value);
		});
	});
	//window.open('http://incoming.hotjar.com/s/7366', '_blank');
	</script>



<iframe name="_hjRemoteVarsFrame" title="_hjRemoteVarsFrame" id="_hjRemoteVarsFrame" style="display: none !important; width: 1px !important; height: 1px !important; opacity: 0 !important; pointer-events: none !important;" src="./MUL - Fast Multiplication_files/rcj-99d43ead6bdf30da8ed5ffcb4f17100c.html"></iframe><div id="ads"></div></body></html>