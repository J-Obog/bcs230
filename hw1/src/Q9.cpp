#include <iostream>
using namespace std; 

bool isEven(int);

int main() {
    int x; 

    cout << "Enter a number to check its parity: "; 
    cin >> x; //Save input to variable 'x'

    cout << x << " is an " << ((isEven(x)) ? "even" : "odd") << " number"<< endl; // Utilizing ternary to conditionally print the parity 

    return 0; 
}


bool isEven(int num) {
    return num % 2 == 0; //Checking to see if num is divisible by 2
} 