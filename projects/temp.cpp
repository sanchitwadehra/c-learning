#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Output stream ka istemal
    cout << "Hello, World!" << endl;

    // Input stream ka istemal
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "You entered: " << number << endl;

    // File input aur output stream ka istemal
    ofstream outputFile("example.txt");
    outputFile << "This is written to the file." << endl;
    outputFile.close();

    ifstream inputFile("example.txt");
    string line;
    getline(inputFile, line);
    cout << "Data from file: " << line << endl;
    inputFile.close();

    return 0;
}
