 // Selection Sort without Using Function
  $(document).ready(function(){
    // Array A 
    var A = [4,5,1,9,0];
    // Size Of Array
    var N = A.length;
    // Selection Sort Algorithm
    for(var i=0;i<N-1;i++)
    {
        // Let min element be ith element
        var key = i;
        for(var j=i+1;j<N;j++){
           if(A[j]<A[key]){
             key = j;
           }   
        }
        // Swap(A[i],A[key])
        var temp = A[i];
        A[i] = A[key];
        A[key] = temp;
    } 
    // Output in Console
    for(var i=0;i<N;i++){
      console.log(A[i]);
    }
 });
