#include "DocumentWeight.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


/* Non-Class Utilities */ 
//Printing each term in a document
void printTerms(Document doc) {
    int len = doc.documentTermsCount; 
    for(int i = 0; i < len; i++) {
        if(i == (len - 1)) {
            cout << doc.documentTerms[i] << endl;  
        } else {
            cout << doc.documentTerms[i] << ", "; 
        }
    }
}
//Checking if a term is already in the document terms
bool exists(string term, string terms[], int length) {
    for(int i = 0; i < length; i++) {
        if(term == terms[i]) {
            return true; 
        }
    }
    return false;
}
//Returning Document structure whose terms are the unique keywords from the string input
Document parseDocument(string str) { 
    Document doc;
    doc.documentContent = str;
    int len = str.length(); 
    string subStr; 

    for(int i = 0; i < len; i++) {
        int ascii = (int)str[i]; 
        if(ascii < 65) {
            if(!subStr.empty()) {
                if(!exists(subStr, doc.documentTerms, doc.documentTermsCount)) {
                    doc.documentTerms[doc.documentTermsCount] = subStr;
                    doc.documentTermsCount++; 
                } 
                subStr.clear();
            }
        } else {
            char chr = (ascii >= 97) ? (char)ascii : (char)(ascii + 32); 
            subStr += chr; 
            if(i == (len - 1)) { 
                doc.documentTerms[doc.documentTermsCount] = subStr;
                doc.documentTermsCount++;
            }
        }
    }
    return doc; 
}
// Returning |d1 ∩ d2|
int intersectionCardinality(Document d1, Document d2) {
    int intr = 0; 
    for(int i = 0; i < d1.documentTermsCount; i++) {
        for(int j = 0; j < d2.documentTermsCount; j++) {
            if(d1.documentTerms[i] == d2.documentTerms[j]) {
                intr++;  
            }
        }
    }
    return intr; 
}
/* End of utils */


DocumentWeight::DocumentWeight() {
    //cout << "O Hello There!" << endl; 
}

DocumentWeight::~DocumentWeight() {
    //cout << "O Hello There!" << endl; 
}

void DocumentWeight::addNewDocument(string document) {
    Document d = parseDocument(document);
    documents[documentsCount++] = d;   
}

void DocumentWeight::addNewQuery(string query) {
    Document q = parseDocument(query); 
    documentsQuery[documentQueryCount++] = q; 
}

void DocumentWeight::calculateSimilarities() {
    for(int i = 0; i < documentQueryCount; i++) {
        for(int j = 0; j < documentsCount; j++) {
            int Q = documentsQuery[i].documentTermsCount; 
            int D = documents->documentTermsCount;
            int QaD = intersectionCardinality(documentsQuery[i], documents[j]);
            Similarity s; 
            s.documentID = j;  
            s.queryID = i; 
            s.similarity = QaD / (sqrt(Q) * sqrt(D));
            similarity[similarityCount++] = s; 
        }
    }	
}

void DocumentWeight::sortSimilarities() {
    for(int i = (similarityCount - 1); i > 0; i--) {
        for(int j = 0; j < i; j++) {
            
        }
    }
}

void DocumentWeight::printSimilarities() {
    for(int i = 0; i < similarityCount; i++) {
        int did = similarity[i].documentID;
        int qid = similarity[i].queryID;
        cout << "======= SIM ( "<< i << " ) ============" << endl;
        cout << "DocID: " << did << endl; 
        cout << "QueryID: " << qid << endl; 
        cout << "DocTerms: ";
        printTerms(documents[did]);  
        cout << "QueryTerms: "; 
        printTerms(documentsQuery[qid]); 
        cout << "Binary Cosine Coeff: " << similarity[i].similarity << endl;  
        cout << "==========================" << endl;
    }
}