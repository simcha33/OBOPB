#include <iostream>
#include <fstream>
#include <ostream>
#include <string>

#define INFILE1 "C:\\Users\\simch\\OneDrive\\Documenten\\School\\Jaar 2\\cpp\\Opdracht_4_2\\infile1.txt"
#define INFILE2 "C:\\Users\\simch\\OneDrive\\Documenten\\School\\Jaar 2\\cpp\\Opdracht_4_2\\infile2.txt"
#define OUTFILE "C:\\Users\\simch\\OneDrive\\Documenten\\School\\Jaar 2\\cpp\\Opdracht_4_2\\outfile.txt"

using namespace std;

int main() {

    ifstream inFile1;
    ifstream inFile2;
    ofstream outFile;

    inFile1.open(INFILE1);
    inFile2.open(INFILE2);
    outFile.open(OUTFILE);

    string outStr;

    char c = 'q';
    ifstream * currStream = &inFile1;

    while (!inFile1.eof() && !inFile2.eof())
    {
        if(c == '\n' || c == '\r') {
            if (currStream == &inFile1)
            {
                currStream = &inFile2;
            }
            else
            {
                currStream = &inFile1;
            }
        }

        currStream->get(c);
        outStr+=c;
    }
    cout << outStr;
    outFile << outStr;
    return 0;
}