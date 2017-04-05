// Insertion Sort in JS without using function
  $(document).ready(function(){
    // Array A 
    var A = [4,5,1,9,0];
    // Size Of Array
    var N = A.length;
    // Insertion Sort Algorithm
    for(var i=1;i<N;i++)
    {
        var key = A[i];
        var j = i-1;
        while(j>=0 && A[j]>key){
          A[j+1] = A[j];
          j--;
        }
        A[j+1] = key;
    } 
    // Output in Console
    for(var i=0;i<N;i++){
      console.log(A[i]);
    }
 });
