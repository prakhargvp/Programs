#include<iostream>
using namespace std;
// Function to check the Vowel
bool isVowel(char ch) 
{ 
	ch = toupper(ch);
	return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'); 
}
// Main Calling Function
int main(){
	//string object
	string str;
	str = "abc de";
	int count=0;
	for(int i=0; i<str.length(); i++){
		// To check is character is vowel
		if(isVowel(str[i]))
			++count;
		
	}
	// Total numbers of Vowel
	cout << count << endl;	// 2
return 0;
}
