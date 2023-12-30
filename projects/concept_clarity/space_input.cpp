#include <iostream>
using namespace std;

int main()
{
    string userInput;

    cout << "Please enter a sentence:\n";
    getline(cin >> ws, userInput); // Taking input using getline with ws
    // Read this :- https://stackoverflow.com/questions/70138063/why-do-cin-and-getline-exhibit-different-reading-behavior
    cout << "You entered: " << userInput << endl;

    return 0;
}
