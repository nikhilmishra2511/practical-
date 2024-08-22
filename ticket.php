<?php


//writer :- NIKHIL MISHRA
//Date   :- 22/08/2024



$person=1;
$distance=510; //in kilometers;
if($distance>250)
{
    $price=5000; //in rupees
}
if($distance<=500)

{
     $price=10000; //in rupees
}
if($distance>500)

{
     $price=20000; //in rupees
}
$name="Ritu";
$Address="Umargaon";
$contact=7041674527;
$source="umargaon";
$destination="kolkata";
$date_of_journey="25 November 2024";
$Gender="Female";
$servicecharge=$price*10/100;
$final_price=$price+$servicecharge*$person;

echo "Name = ". $name;
echo "<br> Address = ". $Address;
echo "<br> Contact =". $contact;
echo "<br> Source = ". $source;
echo "<br> Destination =". $destination;
echo "<br> Date of Journey =". $date_of_journey;
echo "<br> Gender =". $Gender;
echo "<br> Total Fare =". $final_price; 

?>
