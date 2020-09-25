#include <iostream>
using namespace std; 

int factorial(int, bool);

int main() {
    
    factorial(4, 1); //Method will print the value of '24' to the screen
    factorial(4, 0); //Method will not print the value of '24' to the screen

    return 0;
}

int factorial(int num, bool shouldPrint) {
    int tmp = 1; //Temporary variable to track factorial

    while(num > 1) { //Utilizing while-loop based factorial calculation
        tmp *= num;
        num--; 
    }

    if(shouldPrint) {
        cout << tmp << endl; 
    }

    return tmp; 
}   