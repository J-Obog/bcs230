#include <iostream>
#include <cstring>
#define size 15
#define asciiSize 255
using namespace std;

void getMaxCharfreq(char[]);

void getMaxCharfreq(char arr[]) {
    int charMap[asciiSize] = {0}; 
    int len = strlen(arr);
    char maxChar = '\0';
    int maxFreq = 1; 

    for(int i = 0; i < len; i++) {
        int asciiVal = (int)arr[i]; 
        if(++charMap[asciiVal] >= maxFreq) {
            maxChar = arr[i]; 
            maxFreq = charMap[asciiVal];
        }
    }

    cout <<"The max character frequency is " << maxChar << " with frequency " << maxFreq;
}



int main() {
    char arr[size] = "\0";
    cout << "Please enter your string: ";
    cin >> arr;
    getMaxCharfreq(arr);

    return 0; 
}