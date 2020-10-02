#include <iostream>
#include <cstring>
#define size 100
using namespace std;

int testNum = 1; 

void test(char[], char[]); //For testing
int strCMP(char[], char[]); //For comparing two cstrings

int strCMP(char arr1[], char arr2[]) {
	int i, r;
	i = 0; //Initializing counter

    while ((arr1[i] != '\0' && arr2[i] != '\0') && (arr1[i] == arr2[i])) { 
        i++;
	}

    if(arr1[i] == arr2[i]) { //If both string are equal
        return 0; 
    } else if(arr1[i] > arr2[i]) { //If string 1 is greater
        return 1; 
    } else { //If string 1 is lesser
        return -1; 
    }

}

//Testing cases
void test(char arr1[], char arr2[], string description="") {
    int e = strcmp(arr1, arr2);
    int a = strCMP(arr1, arr2);
    char sgn = (e == 1) ? '>' : (e == -1) ? '<' : '=';
    bool status = (e == a);
    cout << "------------ TEST CASE # " << testNum << " ------------" << endl; 
    cout << "TEST CASE NUM: #" << testNum << endl;
    cout << "LONG_DESCRIPTION: " << description << endl; 
    cout << "SHORT_DESCRIPTION: " << arr1 << " " << sgn << " " << arr2 << endl;  
    cout << "EXPECTED: " << e << endl;
    cout << "ACTUAL: " << a << endl; 
    cout << "STATUS: " << ((status) ? "PASSED" : "FAILED") << endl; 
    cout << "--------------------------------------" << endl; 
    testNum++;
}

int main() {
    char arr_1[size] = "her"; 
    char arr_2[size] = "here"; 
    char arr_3[size] = "foobar";
    char arr_4[size] = "foobar"; 

    test(arr_1, arr_2, "Asserting that string_1 is less than string_2");
    test(arr_2, arr_1, "Asserting that string_1 is greater than string_2");
    test(arr_3, arr_4, "Asserting that string_1 is equal to string_2");

    return 0; 
}