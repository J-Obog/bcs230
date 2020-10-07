#include <iostream>
#include <cstring>
#define size 15
using namespace std;

char getMaxChar(char[]); //For returning the max char in a char array

char getMaxChar(char charArr[]) {
    char maxChar = charArr[0]; //Assume that the first char in array is the max
    int len = strlen(charArr); //Get the length

    for(int i = 1; i < len; i++) {
        if((int)charArr[i] > (int)maxChar) { 
            maxChar = charArr[i]; //Reassign max if current char is greater than current max
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
