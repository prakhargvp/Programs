// To count the total number of vowels using recursion
#include<iostream>
using namespace std;
// Function to check the Vowel
bool isConsonant(char ch) 
{ 
	ch = toupper(ch);
	return !(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') && ch >= 65 && ch <= 90; 
}

// to count total number of consonant from 0 to n
int totalConsonant(string str, int n){
	if(n==0)
		return isConsonant(str[0]);	
	return totalConsonant(str,n-1) + isConsonant(str[n]);	
}

// Main Calling Function
int main(){
	//string object
	string str;
	str = "abc de";
	int count=0;
	// count total consonant from 0 to str.size() - 1 index
	count = totalConsonant(str,str.size()-1);
	// Total numbers of consonant 
	cout << count << endl;	// 3
return 0;
}
