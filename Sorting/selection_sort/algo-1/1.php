<?php
	// Selection Sort Using php 
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
	// Selection Sort Algorithm
	for($i=0;$i<$N-1;$i++){
		// Let i-th element be minimum
		$key = $i;	
		for($j=$i+1;$j<$N;$j++){
			if($A[$j]<$A[$key]){
				$key = $j;
			}
		}
		// swap(A[i],A[key])
		$temp = $A[$i];
		$A[$i] = $A[$key];
		$A[$key] = $temp;	
	}
	// Output
	for($i=0;$i<$N;$i++){
		echo $A[$i]." ";
	}
?>
