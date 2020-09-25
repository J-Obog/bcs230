#include <iostream>
using namespace std; 


int main() {
    int num, x; //Variable to hold number of entries and the entered number respectively
    
    cout << "How many numbers would you like to enter?: ";
    cin >> num; 

    for(int i = 0; i < num; i++) {
        cout << "Entry #" << (i+1) << ": ";
        cin >> x; //Read in number from input
        cout << "\nFor entry #" << (i+1) << ", you entered " << x << endl; //Output
    }

    cout << "All entries complete!" << endl; 

    return 0; 
}