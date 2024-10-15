//Owen Zhao
//10/15/24
//Homework #3: Files

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    char type;
    int amount;
    int withdrawal;
    int deposit;
    int starting;
    int final;

    ifstream inFile;
    ofstream outFile;

    inFile.open("transactions.txt");
    outFile.open("Part1out.txt");

    inFile >> starting;
    inFile >> type >> amount;

    while(inFile) {

    }

    inFile.close();
    outFile.close();

return 0;
}