<?php


// Writer :- NIKHIL MISHRA
// Date :- 24/08/2024


$array = [
    "a" => 3,
    "b" => 1,
    "c" => 2,
    "d" => 4,
];


$ascendingArray = $array;
asort($ascendingArray); 

echo "Ascending Order:\n";
print_r($ascendingArray);


$descendingArray = $array;
arsort($descendingArray); 

echo "Descending Order:\n";
print_r($descendingArray);
?>
