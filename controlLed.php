<html>
<head>
    <title>Web Control LEDs Beaglebone Black</title>
    <style type="text/css">
        body {
			background-color: black;
		}
		p {
            display: table-cell;
			color: white;
        }

        button {
            width: 75px;
			height:25px;
            margin: 2px auto;
			border-radius: 8px;
        }
		.on {
			background-color: white; 
			color: black; 
			border: 2px solid green;
		}
		.on:hover {
			background-color: green;
			color: white;
		}
		.off {
			background-color: white; 
			color: black; 
			border: 2px solid red;
		}
		.off:hover {
			background-color: red;
			color: white;
		}
    </style>
    <?php
    if (isset($_GET['led']) && isset($_GET['onOff'])) {
        $led = $_GET['led'];
        $onOff = $_GET['onOff'];
        exec("/var/www/html/project $led $onOff");
    }
    ?>
</head>
<body>
    <div style ="text-align: center;">
    </div>
    <div style="width: 200px; margin: 0px auto; text-align:center;">
	<img src="/images/image1.jpg" width="250" height="125" title="Led image"     alt="Ilumination" />
        <div style="width: 100px; float: left;">
            <p>LED #53(USR0):</p>
            <button type="button" class="on" onclick="location.href='controlLed.php?led=53&onOff=1'">ON</button>
            <button type="button" class="off" onclick="location.href='controlLed.php?led=53&onOff=0'">OFF</button>
        </div>
        <div sytle="width: 100px; margin-left: 100px;">
            <p>LED #54(USR1):</p>
            <button type="button" class="on" onclick="location.href='controlLed.php?led=54&onOff=1'">ON</button>
            <button type="button" class="off" onclick="location.href='controlLed.php?led=54&onOff=0'">OFF</button>
        </div>
        <div style="width: 100px; float: left;">
            <p>LED #55(USR2):</p>
            <button type="button" class="on" onclick="location.href='controlLed.php?led=55&onOff=1'">ON</button>
            <button type="button" class="off" onclick="location.href='controlLed.php?led=55&onOff=0'">OFF</button>
        </div>
        <div sytle="width: 100px; margin-left: 100px;">
            <p>LED #56(USR3):</p>
            <button type="button" class="on" onclick="location.href='controlLed.php?led=56&onOff=1'">ON</button>
            <button type="button" class="off" onclick="location.href='controlLed.php?led=56&onOff=0'">OFF</button>
        </div>
    </div>
</body>
</html>