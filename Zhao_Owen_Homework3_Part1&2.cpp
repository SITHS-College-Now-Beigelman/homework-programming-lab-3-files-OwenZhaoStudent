//Owen Zhao
//10/15/24
//Homework #3: Files

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int start;
    int transaction;
    int debit = 0;
    int credit = 0;
    string type;
    int amount;
    int end;

    ifstream inFile;
    ofstream outFile;

    inFile.open("transactions.txt");
    outFile.open("Part1out.txt");

    while (!inFile.eof()) {
        inFile >> end >> transaction >> amount;
        if (type == "W") {
            end =- amount;
            outFile << end;
        }
    }

    inFile.close();
    outFile.close();
    
return 0;
}