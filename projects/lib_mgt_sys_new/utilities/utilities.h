#ifndef UTILITIES_H
#define UTILITIES_H

#ifdef _WIN32
    #define CLEAR "cls"
#else //In any other OS
    #define CLEAR "clear"
#endif
#include <cstdlib>
inline void clearScreen()
{
    system(CLEAR);
}

#endif // UTILITIES_H
