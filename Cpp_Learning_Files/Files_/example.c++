#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Hello, world!\n";
        outFile << "This is a sample file.\n";
        outFile.close();
    } else {
        cerr << "Failed to open file for writing.\n";
        return 1;
    }

    // Reading from a file
    ifstream inFile("example.txt");
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << line << '\n';
        }
        inFile.close();
    } else {
        cerr << "Failed to open file for reading.\n";
        return 1;
    }

    return 0;
}