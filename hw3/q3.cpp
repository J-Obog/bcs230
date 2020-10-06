#include <iostream>
#include <cstring>
#include <cmath> 
#define size 15
using namespace std;

int convertBinaryToInteger(char[]); 

int convertBinaryToInteger(char arr[]) {
    int deci = 0; 
    int len = strlen(arr);

    for(int i = (len - 1); i >= 0; i--) {
        if(arr[i] == '1') {
            int exponent = (len-1) - i; 
            deci += pow(2, exponent);
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
