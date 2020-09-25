#include <iostream>
using namespace std; 

int factorial(int);

int main() {

    cout << "Factorial: While" << endl; 
    cout << "Factorial of 2 is " << factorial(2) << endl;
    cout << "Factorial of 3 is " << factorial(3) << endl;
    cout << "Factorial of 4 is " << factorial(4) << endl; 
    cout << "Factorial of 5 is " << factorial(5) << endl; 

    return 0;
}

int factorial(int num) {
    int tmp = 1; //Temporary variable to track the value of the factorial

    while(num > 1) { //Continue calculating factorial until num is not > 1 (No need to compute factorial of 0 and 1 as they are both 1)
        tmp *= num;
        num--; 
    }
    return tmp; 
}   