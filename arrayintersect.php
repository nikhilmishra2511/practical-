<?php

// Writer: NIKHIL MISHRA
// Date: 24/08/2024

$a = array(1, 2, 3, 4, 5);
$b = array(3, 4, 5, 6, 7);
$c = array_intersect($a, $b);

echo "Intersection of ";
print_r($a);
echo " and ";
print_r($b);
echo " is: ";
print_r($c);

?>
