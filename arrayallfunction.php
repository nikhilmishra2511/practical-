<?php


// Writer :- NIKHIL MISHRA
// Date :- 24/08/2024


 $arr=array('a'=>'10','b'=>'20','c'=>'30','d'=>'40');
 $ch=$_POST['rad1'];
 switch($ch)
 {
 case 1 :
        echo "The array elements are  : <br>";
        print_r($arr);
        break;
  case 2 :
        echo "Size of The array is  : <br>";
        echo sizeof($arr);
        break;
  case 3 : echo" <br>array before deleting element<br><br>";
        print_r($arr);
        $key=$_POST['key'];
        if(array_key_exists($key,$arr))
        {
            unset($arr[$key]);
            echo"<br><br> array after deleting element<br><br>";
            print_r($arr);
        }
        else echo"<br><br>The key is not present";
         break;
   case 4 :
        echo "Flipped array is  : <br>";
        $arr1=array_flip($arr);
        print_r($arr1);
        break;
    case 5 :
        echo "shuffled array is  : <br>";
        shuffle($arr);
        print_r($arr);
        break;
  default:echo "Invalid choice";
  }
  ?>
