#ifdef _WIN32
    #define CLEAR "cls"
#else //In any other OS
    #define CLEAR "clear"
#endif

#include <iostream>
using namespace std;

void clearScreen()
{
    system(CLEAR);
}