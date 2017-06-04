// To count the total number of vowels using recursion
#include<iostream>
using namespace std;
// Function to check the Vowel
bool isVowel(char ch) 
{ 
	ch = toupper(ch);
	return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'); 
}

// to count total number of vowel from 0 to n
int totalVowels(string str, int n){
	if(n==0)
		return isVowel(str[0]);	
	return totalVowels(str,n-1) + isVowel(str[n]);	
}

// Main Calling Function
int main(){
	//string object
	string str;
	str = "abc de";
	int count=0;
	// count total vowels from 0 to str.size() - 1 index
	count = totalVowels(str,str.size()-1);
	// Total numbers of Vowel
	cout << count << endl;	// 2
return 0;
}
