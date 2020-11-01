#include "DocumentWeight.cpp"
#include <iostream>
using namespace std;

//“Cows are big, Cows go moo. I love cows.”
//love holstein cows

int main() {
	DocumentWeight d1;
    int dn, qn; 
    string s; 

    cout << "How many queries?: " << endl; 
    cin >> qn; 
    cout << "How many documents?: " << endl; 
    cin >> dn;  

    cin.ignore();   

    for(int i = 0; i < qn; i++) {
        cout << "Enter Query #" << (i+1) << ": " << endl;
        getline(cin, s); 
        d1.addNewQuery(s);    
    }

    for(int ii = 0; ii < dn; ii++) {
        cout << "Enter Document #" << (ii+1) << ": " << endl;
        getline(cin, s); 
        d1.addNewDocument(s);    
    }

    d1.calculateSimilarities(); 
    d1.printSimilarities(); 

    return 0; 
}