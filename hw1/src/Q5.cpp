#include <iostream>
using namespace std; 

int factorial(int);

int main() {
    
    cout << "For Loop Factorial" << endl; 
    cout << "Factorial of 2 is " << factorial(2) << endl;
    cout << "Factorial of 3 is " << factorial(3) << endl;
    cout << "Factorial of 4 is " << factorial(4) << endl; 
    cout << "Factorial of 5 is " << factorial(5) << endl; 
    
    return 0;
}

int factorial(int num) {
    int tmp = 1; //Temporary variable to track factorial

    for(int i = num; i > 1; i--) { //Same concept as Q4 of avoiding unnecessary computation 
        tmp *= i; 
    }
    return tmp; 
}   
