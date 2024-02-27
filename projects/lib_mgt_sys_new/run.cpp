#include <cstdlib>
#include <iostream>

#ifdef _WIN32
    #define OS_Windows
#elif __APPLE__
    #define OS_Mac
#elif __linux__
    #define OS_Linux
#else
    #define OS_Unknown
#endif

int main() {
    #ifdef OS_Windows
        std::cout << "Loading for Windows.\n";
        system("scripts\\run.bat");
    #elif defined(OS_Mac) || defined(OS_Linux)
        std::cout << "Loading for Linux/MacOS.\n";
        system("/bin/bash scripts/pre-run.sh");
        system("/bin/bash scripts/run.sh");
    #else
        std::cout << "Unsupported operating system.\n";
    #endif
    return 0;
}
