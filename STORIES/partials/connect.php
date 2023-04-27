<?php
$con=new mysqli('localhost','root','','stories'); 
if($con->connect_errno){
    die("ERROR: " . $con->connect_err);
}

?>