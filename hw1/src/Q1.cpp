#include <iostream>
using namespace std; 


int main() {
    int studentId; 
    char firstInitial, lastInitial; 
    
    cout << "Enter in student ID: "; 
    cin >> studentId; //Save input to studentId variable

    cout << "Enter first initial: ";
    cin >> firstInitial; //Save input to firstInitial variable

    cout << "Enter last initial: ";
    cin >> lastInitial; //Save input to lastInitial variable

    //Output data
    cout << "\nStudent ID: " << studentId << endl; 
    cout << "Student First Name Initial: " << firstInitial << endl; 
    cout << "Student Last Name Initial: " << lastInitial << endl;

    return 0; 
}