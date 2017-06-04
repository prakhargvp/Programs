// To count total consonant in a string using iterative.
#include<iostream>
using namespace std;
// Function to check the Consonant 
bool isConsonant(char ch) 
{ 
	ch = toupper(ch);
	return !(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') && ch >= 65 && ch <= 90; 
}
// Main Calling Function
int main(){
	//string object
	string str;
	str = "abc de";
	int count=0;
	for(int i=0; i<str.length(); i++){
		// To check is character is Consonant 
		if(isConsonant(str[i]))
			++count;
		
	}
	// Total numbers of Consonant 
	cout << count << endl;	// 3 (b, c, d)
return 0;
}
