
<!DOCTYPE html>
<html>
<head>
	<title>Articles</title>
	<style>
		.container {
			width: 80%;
			margin: 0 auto;
			text-align: center;
		}
		body {
			font-family: Arial, sans-serif;
			background-color: #f5f5f5;
		}
		h1 {
			color: #008080;
			margin-top: 50px;
		}
		p {
			font-size: 18px;
			line-height: 1.5;
			margin: 20px 0;
		}
		ul {
			list-style: none;
			padding: 0;
			margin: 0;
		}
		li {
			padding: 10px;
			border-bottom: 1px solid #ddd;
		}
		li a {
			color: #333;
			text-decoration: none;
			font-weight: bold;
			font-size: 20px;
		}
		li a:hover {
			color: #008080;
		}
	</style>





</head>
<body>


	<div class="container">
	<?php include './partials/connect.php'; ?> 
		<h1>List of Articles</h1>
		<p>Welcome to our collection of articles on various topics. We hope you find them interesting and informative!</p>
		<ul>
        <li><a href="article1.php">Article 1: The Importance of Regular Exercise</a></li>
        <img src="./images/little-girl-reading-book_1308-105797.avif" width="400" height="400" >
		<li><a href="article2.php">Article 2: Tips for Eating a Healthy Diet</a></li>
        <img src="./images/happy-girl-reading-book-vector.jpg" width="400" height="400"  >
		<li><a href="article3.php">Article 3: How to Build Strong Relationships</a></li>
        <img src="./images/images.jpg" width="400" height="400" >
		</ul>
		<p>Be sure to check back often for new articles and updates!</p>
		<p>If you have any feedback or suggestions for articles you'd like to see, please don't hesitate to <a href="contact.php"><h3>CONTACT US</h3></a>.</p>
		<p>Click here to open home page <a href="index.php"><h1>INDEX</h1></a>.</p>

	</div>
</body>
</html>




