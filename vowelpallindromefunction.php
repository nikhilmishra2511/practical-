<?php


// Writer :- NIKHIL MISHRA
// Date:- 24/08/2024


function totalvowel($s)
{
    $ca=0;
    $ce=0;
    $ci=0;
    $co=0;
    $cu=0;
    $len=strlen($s);
    for($i=0;$i<$len;$i++)
    {
        switch($s[$i])
        {
            case 'a':
            case 'A': echo "<br> $s[$i] Found at Position $i";
                      $ca++;
                      break;
            case 'e':
            case 'E': echo "<br> $s[$i] Found at Position $i";
                      $ce++;
                      break;
            case 'i':
            case 'I': echo "<br> $s[$i] Found at Position $i";
                      $ci++;
                      break;
            case 'o':
            case 'O': echo "<br> $s[$i] Found at Position $i";
                      $co++;
                      break;
            case 'u':
            case 'U': echo "<br> $s[$i] Found at Position $i";
                      $cu++;
                      break;                                   
        }
    }

    echo "<br> occurences of a: $ca <br>";
    echo "<br> occurences of e: $ce <br>";
    echo "<br> occurences of i: $ci <br>";
    echo "<br> occurences of o: $co <br>";
    echo "<br> occurences of u: $cu <br>";
}




function checkpallindrome($str)
{
    if(strcasecmp($str,strrev($str))==0)
    {
        echo "$str is Pallindrome";
        return;
    }
    else
    {
        echo "$str is not Pallindrome";
    }
}


?>