// Student ID: 10987644
// Name: Evans Acheampong
// Question 1

#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>

using namespace std;

struct LetterInfo {
    int count;
    double percent;
};

void openFile(ifstream& inFile, ofstream& outFile) {
    string inFileName, outFileName;
    cout << "Enter the name of the input file: ";
    cin >> inFileName;
    cout << "Enter the name of the output file: ";
    cin >> outFileName;
    inFile.open(inFileName);
    if (!inFile) {
        cerr << "Error: could not open input file \"" << inFileName << "\"" << endl;
        exit(1);
    }
    outFile.open(outFileName);
    if (!outFile) {
        cerr << "Error: could not open output file \"" << outFileName << "\"" << endl;
        exit(1);
    }
}

void count(ifstream& inFile, LetterInfo letters[]) {
    char c;
    while (inFile.get(c)) {
        if (isalpha(c)) {
            int index = isupper(c) ? c - 'A' : c - 'a' + 26;
            letters[index].count++;
        }
    }
}

void printResult(ofstream& outFile, LetterInfo letters[]) {
    int totalCaps = 0, totalLowers = 0;
    for (int i = 0; i < 26; i++) {
        totalCaps += letters[i].count;
        totalLowers += letters[i + 26].count;
    }
    outFile << "Letter\tCount\t%Caps\t%Lowers\n";
    for (int i = 0; i < 26; i++) {
        double capPercent = (double)letters[i].count / totalCaps * 100;
        double lowerPercent = (double)letters[i + 26].count / totalLowers * 100;
        letters[i].percent = capPercent;
        letters[i + 26].percent = lowerPercent;
        outFile << (char)(i + 'A') << "\t" << letters[i].count << "\t"
                << capPercent << "%\t" << lowerPercent << "%\n";
    }
}

int main() {
    ifstream inFile;
    ofstream outFile;
    openFile(inFile, outFile);
    LetterInfo letters[52] = {}; // initialize all counts to 0
    count(inFile, letters);
    printResult(outFile, letters);
    return 0;
}

