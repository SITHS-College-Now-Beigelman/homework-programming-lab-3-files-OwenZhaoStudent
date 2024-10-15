//Owen Zhao
//10/15/24
//Homework #3: Files

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int account;
    int transaction;
    int debit = 0;
    int credit = 0;
    char type;
    int amount;
    int end;
    int i;

    ifstream inFile;
    ofstream outFile;

    inFile.open("transactions.txt");
    outFile.open("out.txt");

    inFile >> account;

    for (i = 0; i <= 7; i++) {
        inFile >> type >> amount;
        if (type == 'W') {
            account -= amount;
        }
        else if (type == 'D') {
            account += amount;
        }
    }

    outFile << account;
    
    inFile.close();
    outFile.close();

return 0;
}