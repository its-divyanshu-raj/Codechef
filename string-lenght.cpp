/* We can use the length() function to get the length of a string.
For eg.
string s = "hello";
int a = s.length(); // a now stores the length of s.
Write a program which does the following
Create a variable 
txt and assign it the text "NumeroTres"
Use the length() function to output to the console the number of characters in txt
*/ 
#include<bits/stdc++.h>
using namespace std;

int main(){
string txt = "NumeroTres";
cout<< "The Length of the word is: " << txt.length();
return 0;
}
