#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
//#include "Part_1.h"

#define FILE "C:\\Users\\simch\\OneDrive\\Documenten\\School\\Jaar 2\\cpp\\Opdracht 4\\infile.txt"
#define OUTFILE "C:\\Users\\simch\\OneDrive\\Documenten\\School\\Jaar 2\\cpp\\Opdracht 4\\outfile.txt"

using namespace std;

int main() {

    //Part_1 TextReverse;

    //TextReverse.textreverse();

    ifstream inFile;
    ofstream outFile;

    inFile.open(FILE);
    outFile.open(OUTFILE);

    string oldWords;
    string newWords;

    char ch;

    while (!inFile.eof())
    {
        inFile.get(ch);
        oldWords+=ch;
    }
    for(int count = oldWords.size() -1 ; count >=0; --count)
    {
        newWords += oldWords[count];
    }
    cout << newWords << endl;
    outFile << newWords << endl;

    // check for error in
    if (inFile.fail())
    {
        cerr << "Error opening infile" << endl;
        exit(1);
    }

    //check for error out
    if (inFile.fail())
    {
        cerr << "Error opening outfile" << endl;
        exit(1);
    }

    inFile.close();
    outFile.close();

    return 0;


}