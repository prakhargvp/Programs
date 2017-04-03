// Implemeting Selection sort in c++ using vectors
// Header Files
// Preprocessor Directive
#include<iostream>
#include<vector>
using namespace std;
int main(){
	// Varaible Declaration
	vector<int> A;
	int N,i,j,key,num;
	// Temp Varaible for swapping
	int temp;
	// Input the Size of Array
	cin >> N;
	// Input the Array elements
	for(i=0;i<N;i++){
		cin >> num;
		A.push_back(num);
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
