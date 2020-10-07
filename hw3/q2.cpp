#include <iostream>
#include <cstring>
#define size 15
#define asciiSize 255
using namespace std;

void getMaxCharfreq(char[]); //For outputting the greatest char and its frequency in a given char array

void getMaxCharfreq(char arr[]) {
    /*
   --> Set up a charMap (acts like a hashmap where the ascii value of a character maps to the index of the map array)
    -> Values in the array represent the frequency for each character so all the values are initialized to 0
    */ 
    int charMap[asciiSize] = {0}; 
    int len = strlen(arr); //Get length
    char maxChar = '\0'; //Assume that string is empty until proven otherwise
    int maxFreq = 1; //Since string is empty, the null character would have a frequency of 1 so we set the max frequency to 1

    for(int i = 0; i < len; i++) {
        int asciiVal = (int)arr[i]; //Capture the ascii value for the current char
        if(++charMap[asciiVal] >= maxFreq) {
            /*
                -> First we increment the frequency for the current char then we compare it against the max frequency 
                -> If the current char has a greater frequency than that of the max, we set the max char to the current char 
                and the max frequency tothe current char's frequency 
            */
            maxChar = arr[i]; 
            maxFreq = charMap[asciiVal];
        }
    }

    cout <<"The max character frequency is " << maxChar << " with frequency " << maxFreq; //Output message
}



int main() {
    char arr[size] = "\0";
    cout << "Please enter your string: ";
    cin >> arr;
    getMaxCharfreq(arr);

    return 0; 
}