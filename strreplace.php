<?php

// Writer :- NIKHIL MISHRA
// Date:- 23/08/2024
$a=$_GET['txt1'];
$b=$_GET['txt2'];
$c=$_GET['txt3'];
$f=strpos($a,$b);
$s=strrpos($a,$b);
$count=substr_count($a,$b);
$replace=str_replace($b,$c,$a);

echo "First Occurance = $f <br>";

echo "Last Occurance = $s <br>";

echo "The Replace String is = $replace <br>";
?>