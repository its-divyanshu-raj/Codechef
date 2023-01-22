/* You might have noticed the '{' before and after cout in the previous problem.
This '{' is what is known as curly bracket.
C++ relies on curly braces ('{' in the beginning and '}' at the end) to define the scope of the code.
Other programming languages often use whitespaces for this purpose.

Run this code and to identify the compilation error.
Fix the curly braces to solve the problem. */ 

#include <iostream>
using namespace std;

int main() {
  int Age = 25 ;
  int Vage = 18;

  if (Age < Vage)  
    {
      cout << "Not old enough to vote." << endl;
      cout << " Wait for " << (Vage - Age) << " years"; 
    } else { cout << "Old enough to vote!";
    
    }
    
  return 0;
}
