/* 'if' and 'else' can be used together to create conditions.
It returns 1 if the condition is true and 0 if the condition is false.
There are multiple operators which can be used in conditional statements.

Equal to '=='
Not Equal '!='
Greater than '>'
Less than '<'
Greater than or equal to '>='
Less than or equal to '<='
Write a program which does the following

Let's think of a "real-life example" where we need to find out if a person is old enough to vote.
Find out if the age (25) is greater than OR equal to the voting age limit, which is set to 18.
Declare the variables age and vage - and initialise them to the values 
25
25 and 
18
18 - i.e. the age and the voting age respectively.
Compare age and vage using the syntax given above and output the following
"Old enough to vote!" if  age is greater than or equal to vage "Not old enough to vote." if age is lesser than vage */

#include<bits/stdcc++>
using namespace std;

int main(){
  int age = 25;
  int vage = 18;
  if( age >= vage ) {
     cout << " Old enough to vote! " ;
    } else {  cout<< " Not old enough to vote " ;
    } 
return 0;
}
