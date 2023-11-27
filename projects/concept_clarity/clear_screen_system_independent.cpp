#include <iostream>
using namespace std;

int main()
{
   cout << "Running" << endl;
   char abc;
   cin >> abc;
#ifdef _WIN32
   if (abc == 's')
   {
      system("cls"); // Clears the screen on Windows
      cout << "new screen" << endl;
   }
#else
   if (abc == 's')
   {
      system("clear"); // Clears the screen on Unix-based systems
      cout << "new screen" << endl;
   }
#endif
   return 0;
}