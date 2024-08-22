<?php

//writer :- NIKHIL MISHRA
//Date   :- 22/08/2024


$a=$_GET['txt1'];
$b=$_GET['txt2'];
$ch=$_GET['a'];
switch($ch)
{
    case 1 : echo "$a + $b = ".$a+$b;
             break;
    case 2 : echo "$a - $b = ".$a-$b;
             break;
    case 3 : echo  "$a * $b = ".$a*$b;
             break;
    case 4 : if($b==0)
             echo " number cannot be divided by 0 (zero)";
             else 
             echo "$a / $b = ".$a/$b;
            break;
    default: echo " Enter a valid Choice";
}