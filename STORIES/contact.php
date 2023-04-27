<!DOCTYPE html>
<html>
<head>
	<title>Contact Us</title>
	<style>
		body {
			font-family: Arial, sans-serif;
			background-color: #f5f5f5;
			align="center";
		}
		h1 {
			color: #008080;
			text-align: center;
			margin-top: 50px;
		}
		form {
			margin: 20px auto;
			width: 80%;
			max-width: 600px;
			padding: 20px;
			background-color: #fff;
			border-radius: 10px;
			box-shadow: 0px 0px 10px rgba(0, 0, 0, 0.2);
		}
		label {
			display: block;
			font-weight: bold;
			margin-bottom: 10px;
		}
		input, textarea {
			display: block;
			width: 100%;
			padding: 10px;
			font-size: 16px;
			border-radius: 5px;
			border: 1px solid #ddd;
			margin-bottom: 20px;
		}
		input[type="submit"] {
			background-color: #008080;
			color: #fff;
			font-weight: bold;
			border: none;
			border-radius: 5px;
			padding: 10px 20px;
			cursor: pointer;
		}
		input[type="submit"]:hover {
			background-color: #005353;
		}
	</style>
</head>
<body>
	<h1>Contact Us</h1>
	<form action="process_contact.php" method="post">
		<label for="name">Name:</label>
		<input type="text" id="name" name="name" required>
		<label for="email">Email:</label>
		<input type="email" id="email" name="email" required>
		<label for="message">Message:</label>
		<textarea id="message" name="message" rows="5" required></textarea>
		<input type="submit" value="Send">
	</form>

	<p >Click here to open home page <a href="index.php"><h3>INDEX</h3></a>.</p>

</body>
</html>
