<?php


// Writer :- NIKHIL MISHRA
// Date:- 24/08/2024


include "vowelpallindromefunction.php";
$ch=$_POST['b'];
$str=$_POST['a'];
switch($ch)
{
    case "vowel" : totalvowel($str);
                    break;
    case "pallindrome" :  checkpallindrome($str);
                            break;
    default : echo "Invalid Choice";
}
?>