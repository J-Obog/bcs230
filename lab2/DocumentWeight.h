#include <iostream>
using namespace std;

#ifndef DOCUMENTWEIGHT_H
#define DOCUMENTWEIGHT_H

struct Document {
	string documentContent = "";
	string documentTerms[100];
	int documentTermsCount = 0;
};

struct Similarity {
	int documentID = 0;
	int queryID = 0;
	double similarity = 0.0;
};


class DocumentWeight {
public:
	DocumentWeight();
	~DocumentWeight();
	void addNewDocument(string document);
	void addNewQuery(string query);
	void calculateSimilarities();
	void printSimilarities();
	void sortSimilarities(); 

private:
	Document documents[100];
	Document documentsQuery[100];
	Similarity similarity[1000];

protected:
	int documentsCount = 0;
	int documentQueryCount = 0;
	int similarityCount = 0; 
};

#endif
