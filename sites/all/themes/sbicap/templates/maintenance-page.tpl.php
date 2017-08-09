<!DOCTYPE html>
<head>
  <title>Site Maintenance | SBI Smart</title>
  <style type="text/css">
  	    body{background:#F5F5F6;background: url(sites/all/themes/sbicap/common/images/bg-top.png), url(sites/all/themes/sbicap/common/images/bg-bot.jpg) #F4F4F4;background-repeat: repeat-x, repeat;font-family: 'open_sansregular';font-size: 13px;}
		#header {
		    padding: 0;
		    background: url(sites/all/themes/sbicap/common/images/logo-shadow-bg.png)no-repeat;
		    background-position: 252px 0;
		    margin-top: -17px;
		    height: 144px;
		}
		#header div{width:236px;margin:0 auto;    margin-top: 17px;}
      .container h1 {
           	text-align: center;
			color: #fa6464;
			font-size: 110px;
			margin-top: 235px;
			font-weight: normal;
			font-style: italic;
        }
        .trade {
            background: url("sites/all/themes/sbicap/common/images/404_bg.jpg") no-repeat scroll center top;
        }
        #content {
		    margin-top: 50px;
		    background: #fff;
		    padding-top:61px;
		}
        .container, .trade {
            position: relative;
            box-sizing: border-box;
            overflow: hidden;
            border:none;
        }
        .trade p {
            text-align: center;
		    color: #595959;
		    font-size: 20px;
		    line-height: 2.1 !important;
		    padding: 0px 35px 60px;
		    width: 65%;
		    margin: 0 auto;
        }
        .trade a {
            padding: 6px 20px;
            border-style: none;
            font-size: 18px;
            border-radius: 5px;
            color: white !important;
            text-decoration: none !important;
            background-color: #1b67a1;
            box-shadow: 0 2px 3px #829cab;
        }
        #page {
            width: 1000px;
            margin: 0 auto;
            font-family: Arial, sans-serif, Helvetica;
        }
        #main #main-inner #content {
            width: 100%;
        }
       span.click {
		    font-size: 18px;
		}
  </style>
</head>


<body >
<div id="page">
    <div id="header">
        <div><img src="sites/all/themes/sbicap/common/images/sbicap-logo.png" alt="Home" id="logo-image" /></div>
    </div>
    <div class="container">
		<div id="main">
            <div id="content">
                <div class="trade">
                	<?php print $content; ?>
                </div>
            </div> 
		</div>
    </div>
</body>
</html>
