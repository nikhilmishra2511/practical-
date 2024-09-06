<?php


// Writer :- NIKHIL MISHRA
// Date :- 24/08/2024



 $arr=array('a'=>'10','b'=>'20','c'=>'30','d'=>'40');
 $brr=array('a'=>'10','z'=>'2','x'=>'31','d'=>'40');
 $ch=$_POST['rad1'];
 switch($ch)
 {
 case 1 : echo "Ascending Order:";
        sort($arr);
        print_r($arr);
        echo "<br> Descending Order";
        rsort($arr);
        print_r($arr);
        break;
  case 2 :
            echo "Ascending Order:";
            asort($arr);
             print_r($arr);
            echo "<br> Descending Order";
             arsort($arr);
            print_r($arr);
           break;
  case 3 : echo"Array Intersection";
           print_r(array_intersect($arr,$brr));
           break;
   case 4 : echo "Array Union";
         $u=array_merge($arr,$brr);
         print_r(array_unique($u));
        break;
    case 5 : echo "Array Merge";
        print_r(array_merge($arr,$brr));
        break;

    case 6 : 	echo "Odd numbers in the array: ";
		foreach ($brr as $num) {
	    	if ($num % 2 !== 0) {
        	echo $num . " ";
    		}
		}
		break;

  default:echo "Invalid choice";
  }
  ?>
