/ * The '+' sign can be used between strings to add them together to make a new string.
This is called concatenation. For eg -
string a = "Good"; 
string b = "Work";
cout << a + b;
// output will be: GoodWork
Note: You can add spaces between words by using an empty " " with a space inside or by providing a space in the end of a word for eg "Good ".
Write a program which does the following
Declare two variables 
x and y
Assign the values "Hello" to variable 
x and "World!" to variable y.
Output x and y to the console. Don't forget to add a space in between them. */
  
#include<bits/stdc++.h>
using namespace std;

int main(){
   string x = " Hello ";
   string y = " World! ";
   cout<< x + " " + y ;
   return 0;
}
    
