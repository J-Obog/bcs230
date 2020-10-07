#include <iostream>
#include <cstring>
#include <cmath> 
#define size 15
using namespace std;

int convertBinaryToInteger(char[]);  //For converting a binary string to an integer 

int convertBinaryToInteger(char arr[]) {
    int deci = 0; //Initialize decimal counter
    int len = strlen(arr); //Get length of char array

    for(int i = (len - 1); i >= 0; i--) {
        if(arr[i] == '1') {
            int exponent = (len-1) - i; //Getting exponent since loop doenst start from index 0
            deci += pow(2, exponent); //If the current character is a 1, add the value of 2^exponent to the deci counter
        } 
    }

    return deci; 
}

int main() {
    char arr[size];
    cout << "Please enter your string: ";
    cin >> arr;
    int intval = convertBinaryToInteger(arr);
    cout << "The equivalent value for the binary value " << arr << " = " << intval;

    return 0; 
}
