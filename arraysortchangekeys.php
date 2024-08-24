<?php


// Writer :- NIKHIL MISHRA
// Date :- 24/08/2024



$array = array("a" => 4, "b" => 2, "c" => 8, "d" => 6);


asort($array);
$ascending = array_values($array); 


arsort($array);
$descending = array_values($array);


echo "Ascending Order:\n";
print_r($ascending);

echo "\nDescending Order:\n";
print_r($descending);
?>
