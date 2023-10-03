#include <iostream>
using namespace std; 

int main() {
  float x, y; 
  char op;
  char choice; 
  do{
    cout << "Input a number, operator, and another number ";
    cin >> x >> op >> y;
    if (op == '+')
     cout << "Sum = " << x+y << endl;
   else if (op == '-')
     cout << "Difference = " << x-y << endl;
   else if (op == '*')
     cout << "Product = " << x*y << endl;
   else if (op == '/')
      cout << "Quotient = " << x/y << endl;
   else
     cout << "Choose the right operator" << endl; 

    cout << "Do you wish to continue? (y/n)"; 
    cin >> choice;
  }while(choice != 'n' && choice != 'N');
  
}