// Implemeting Selection sort in c++ using new
// Header Files
// Preprocessor Directive
#include<iostream>
using namespace std;
int main(){
	// Varaible Declaration
	int *A,N,i,j,key;
	// temp variable for swapping
	int temp;
	// Input the Size of Array
	cin >> N;
	// Dynamic Memory Allocation Using new keyword
	A = new int[N];
	// Input the Array elements
	for(i=0;i<N;i++){
		cin >> A[i];
	}	
	// Selection Sort Algorithm
	// Sorted   : A[0...i-1] 
	// UnSorted : A[i...N-1]
	// N = A.size() 
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
		cout << A[i] << " ";
	}
return 0;
}
