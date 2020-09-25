#include <iostream>
using namespace std; 

int factorial(int);

int main() {

    cout << "Do While Factorial" << endl; 
    cout << "Factorial of 2 is " << factorial(2) << endl;
    cout << "Factorial of 3 is " << factorial(3) << endl;
    cout << "Factorial of 4 is " << factorial(4) << endl; 
    cout << "Factorial of 5 is " << factorial(5) << endl; 
    
    return 0;
}

int factorial(int num) {
    int tmp = 1; //Temporary variable to track factorial

    do {
        if(num == 0 || num == 1) { //Break out of loop if number is equal 0 or 1
            break; 
        }

        tmp *= num;
        num--;

    } while(1);

    return tmp; 
}   