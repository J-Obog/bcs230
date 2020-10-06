#include <iostream>
#include <cstring>
#define size 15
using namespace std;

char getMaxChar(char[]);

char getMaxChar(char charArr[]) {
    char maxChar = charArr[0]; 
    int len = strlen(charArr);

    for(int i = 1; i < len; i++) {
        if((int)charArr[i] > (int)maxChar) {
            maxChar = charArr[i]; 
        }
    }

    return maxChar; 
}


int main() {
    char arr[size];
    cout << "Please enter your string: ";
    cin >> arr;
    char maxChar = getMaxChar(arr);
    cout << "The max character in your array " << arr << " is " << maxChar;

    return 0; 
}
