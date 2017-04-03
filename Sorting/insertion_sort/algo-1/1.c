// Header Files
#include<stdio.h>
#define MAX 100
int main(){
	// Varaible Declaration
	int A[MAX],N,i,j,key;
	// Input the Size of Array
	scanf("%d",&N);
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
