<!DOCTYPE html>
<html>
  <body>

    <h2>What Animal Are You?</h2>


    <?php
       $seeds = $mailmen = $run = $scream = $output = $retc = "";
       if ($_SERVER["REQUEST_METHOD"] == "POST") {
       $seeds = test_input($_POST["seeds"]);
       $mailmen = test_input($_POST["mailmen"]);
       $run = test_input($_POST["run"]);
       $scream = test_input($_POST["scream"]);
       exec("/usr/lib/cgi-bin/sp2a/actionPage " . $seeds . " " . $mailmen . " " . $run . " " . $scream, $output, $retc); 
       }
       function test_input($data) {
         $data = trim($data);
         $data = stripslashes($data);
         $data = htmlspecialchars($data);
         return $data;
       } 
       ?>  


     <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
       Do you like seeds?(yes/no)<br>
       <br>
       <input type="text" name="seeds" value="">
       <br>
       <br>
       <br> 
       Do mailmen make you upset?(yes/no)<br>
       <br>  
       <input type="text" name="mailmen" value="">
       <br>
       <br>
       <br>
       Do you like to run around at 3 am?(yes/no)<br>
       <br>  
       <input type="text" name="run" value="">
       <br>
       <br> 
       <br>
       Do you like to scream for no reason?(yes/no)<br>
       <br>  
       <input type="text" name="scream" value="">
       <br>
       <br>
       <br>
       <input type="submit" value="Submit">
     </form>
     
     <?php
	// only display if return code is numeric - i.e. exec has been called
        if (is_numeric($retc)) {
         
       
         echo "<h2>Program Output (an array):</h2>";
         foreach ($output as $line) {
           echo $line;
           echo "<br>";
         }
       
         echo "<h2>Program Return Code:</h2>";
         echo $retc;
	}
    ?>

  </body>
</html>
