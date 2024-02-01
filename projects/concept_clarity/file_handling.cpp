#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Writing to a file using ofstream
    ofstream outputFile("example.txt", ios::out);
    outputFile << "Hello, this is a sample text file." << endl;
    outputFile.close();

    // Reading the file using ifstream
    ifstream inputFile("example.txt", ios::in);
    if (!inputFile.is_open()) {
        cout << "File not found or unable to open." << endl;
        return 1;
    }

    // Reading a line using getline
    string line;
    getline(inputFile, line);
    cout << "Line read from file: " << line << endl;

    // Using fstream for both read and write
    fstream file("example.txt", ios::in | ios::out);
    if (!file.is_open()) {
        cout << "File not found or unable to open." << endl;
        return 1;
    }

    // Moving the file pointer to the beginning using seekg
    file.seekg(0, ios::beg);

    // Reading and printing the entire file
    cout << "File content using seekg:" << endl;
    char ch;
    while (file.get(ch)) {
        cout << ch;
    }
    cout << endl;

    // Moving the file pointer to the end using seekp
    file.seekp(0, ios::end);

    // Appending text to the file
    file << "\nThis line is added using seekp." << endl;

    file.close();

    // Reopening the file to read the modified content
    file.open("example.txt", ios::in);
    if (!file.is_open()) {
        cout << "File not found or unable to open." << endl;
        return 1;
    }

    // Reading and printing the modified content
    cout << "Modified file content:" << endl;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();

    return 0;
}
