<?php

//writer :- NIKHIL MISHRA
//Date   :- 22/08/2024


/* Q} write a PHP Script to display the total 
and percentage of marks of subjects (out of 100) 
Data structure, digital marketing , PHP, SE, and Bigdata….*/

$ds=50;
$dm=60;
$php=70;
$se=80;
$bd=90;
$t=$ds+$dm+$php+$se+$bd;
echo " Total Marks = $t";
$per=$t*100/500;
echo "<br> Total Percentage = $per";
?>
