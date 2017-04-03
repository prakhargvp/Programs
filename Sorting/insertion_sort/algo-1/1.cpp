// Implemeting insertion sort in c++ using new
// Header Files
// Preprocessor Directive
#include<iostream>
using namespace std;
int main(){
	// Varaible Declaration
	int *A,N,i,j,key;
	// Input the Size of Array
	cin >> N;
	// Dynamic Memory Allocation Using new keyword
	A = new int[N];
	// Input the Array elements
	for(i=0;i<N;i++){
		cin >> A[i];
	}	
	// Insertion Sort Algorithm
	// Sorted   : A[0...i-1] 
	// UnSorted : A[i...N-1]
	// N = A.size() 
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
		cout << A[i] << " ";
	}
return 0;
}
