// Implementing Insertion Sort in C using Dynamic Memory Allocation
// Header Files
// Preprocessor Directive
#include<stdio.h>
#include<malloc.h>
// Main Calling Function
int main(){
	// Varaible Declaration
	int *A,N,i,j,key;
	// Input the Size of Array
	scanf("%d",&N);
	// Dynamic Memory Allocation using malloc()
	A = (int*)malloc(N*sizeof(int));
	// Input the Array elements
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}	
	// Insertion Sort Algorithm
	// Sorted   : A[0...i-1] 
	// UnSorted : A[i...N-1]
	for(i=1;i<N;i++){
		key = A[i];	
		j = i-1;
		while(j>=0 && A[j]>key){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = key;
	}
	// Output
	for(i=0;i<N;i++){
		printf("%d ",A[i]);
	}
return 0;
}
