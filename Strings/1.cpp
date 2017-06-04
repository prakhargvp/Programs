#include<string.h>	// strlen()
#include<iostream>
using namespace std;
int main(){
	// String obj 
	string str = "Prakhar Agrawal";	// 15
	// string str = "Prakhar Agrawal\0 123"; // 15
	// string str = "Prakhar Agrawal \0 123"; // 16

	// 1. size of string object using size() method
	cout << str.size() << endl;	
	
	// 2. size of string object using length method
	cout << str.length() << endl;	
	
	// 3. size using old style
	// size of string object using strlen function 
	cout << strlen(str.c_str()) << endl;

	// The constructor of string will set it to the C-style string, 
	//  which ends at the '\0'
	
	// 4. size of string object Using while loop
	int i=0;
	while(str[i] != '\0'){
		++i;
	}
	cout << i << endl;

	// 5. size of string object using for loop
	for(i=0; str[i]!='\0'; i++){
	}
	cout << i << endl;

	// 6. loop breaks when the string ends (\0)
	for(i=0; str[i]; i++){
	}
	cout << i << endl;

return 0;
}
