// Implementing Selection Sort in C using Static Memory Allocation
// Header Files
// Preprocessor Directive
#include<stdio.h>
// Symbolic Constant
#define MAX 100
// Main Calling Function
int main(){
	// Varaible Declaration
	int A[MAX],N,i,j,key;
	// temp variable for swapping
	int temp;
	// Input the Size of Array
	scanf("%d",&N);
	// Input the Array elements
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}	
	// Selection Sort Algorithm
	// Sorted   : A[0...i-1] 
	// UnSorted : A[i...N-1]
	for(i=0;i<N-1;i++){
		// Let i-th element be minimum
		key = i;	
		for(j=i+1;j<N;j++){
			if(A[j]<A[key]){
				key = j;
			}
		}
		// swap(A[i],A[key])
		temp = A[i];
		A[i] = A[key];
		A[key] = temp;	
	}
	// Output
	for(i=0;i<N;i++){
		printf("%d ",A[i]);
	}
return 0;
}
