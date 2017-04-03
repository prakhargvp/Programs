// Implemeting insertion sort in c++ using vectors
// Header Files
// Preprocessor Directive
#include<iostream>
#include<vector>
using namespace std;
int main(){
	// Varaible Declaration
	vector<int> A;
	int N,i,j,key,num;
	// Input the Size of Array
	cin >> N;
	// Input the Array elements
	for(i=0;i<N;i++){
		cin >> num;
		A.push_back(num);
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
