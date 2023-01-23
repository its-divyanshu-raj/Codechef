/* ||' can be used to insert the 'or' condition in a c++ code.
Write a program which does the following
Take input from the console for integer variables z, 
x and Do the above for 2 separate input tuples
z = 5, 
x = 3, 
c = 2
z = 3, 
x = 5,
c = 8
Compute and output the following for each tuple z,x and c "PASS" if c is greater than either x or z Otherwise print "FAIL" in every other case */ 



#include<iostream>
using namespace std;

int main(){
  int z;
  int x;
  int c;
  if( c > x || c > z ) {
  cout<< " PASS " << endl ;
} 
  else {
     cout<< " FAIL " 
  } 
  
 cin>> z;
 cin>> x;
 cin>> c;
 if( c > x || c > z ) {
   cout<< " PASS " << endl;
   }
    else {cout << " FAIL " 
     }
  return 0;
  
 }
