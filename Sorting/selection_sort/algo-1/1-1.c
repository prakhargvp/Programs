// Implementing Selection Sort in C using Dynamic Memory Allocation
// Header Files
// Preprocessor Directive
#include<stdio.h>
#include<malloc.h>
// Main Calling Function
int main(){
	// Varaible Declaration
	int *A,N,i,j,key;
	// temp varaibel for swapping
	int temp;
	// Input the Size of Array
	scanf("%d",&N);
	// Dynamic Memory Allocation using malloc()
	A = (int*)malloc(N*sizeof(int));
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
