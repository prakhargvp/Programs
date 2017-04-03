<?php
	// Insertion Sort Using php 
	// Read Input from standard input file 
	$handle = fopen ("php://stdin","r");
	// Read Size Of Array
	$N = (int)fgets($handle);
	$A = array();
	// Input Array elements
	for($i=0;$i<$N;$i++){
		// We can also use array_push($A,$number)
		$A[$i] = (int)fgets($handle);	
	}
	// Insertion Sort Algorithm
	for($i=1;$i<$N;$i++){
		$key = $A[$i];
		$j = $i - 1;
		while($j>=0 && $A[$j]>$key){
			$A[$j+1] = $A[$j];	
			$j--;
		}
		$A[$j+1] = $key;
	}
	// Output
	for($i=0;$i<$N;$i++){
		echo $A[$i]." ";
	}
?>
