#include <iostream> //It is telling compiler to include input out stream file of C++ to compile the code after 
using namespace std; 
//A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it
//Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.
//If just in case this was not written then I would need to write std::cout std::cin
//Terminal Command to run a file :- dot / file name
//An int is a keyword that references an integer data type. An int data type used with the main() function that indicates the function should return an integer value.
//When we use an int main() function, it is compulsory to write return 0; statement at the end of the main() function.
int main()
{

    int a;
    cout<<"Size of int"<<sizeof(a)<<endl;//storage alotted to int is 4 bytes It stores only integers 
    float b;
    cout<<"Size of float"<<sizeof(b)<<endl;//storage alotted to float is 4 bytes it stores decimals upto 7 decimals 
    char c;                                //or just use a "double" instead for 15 decimal places  which uses 8 bytes
    cout<<"Size of char"<<sizeof(c)<<endl;//It stores characters like abc@#$$% etc using ASCII table and it takes 1 byte storage
    bool d;
    cout<<"Size of bool"<<sizeof(d)<<endl;//stores only 1,0 and takes 1 byte storage
    long int li;//long int takes 8 bytes but in a windows64 bit installation it doesn't work and takes only 4 bytes
    short int si;//short int takes only 2 bytes
    signed int sgi;//MSB(most significant bit) is used to tell sign of the integer 
    unsigned int ugi;//in unsigned the integers that can be stored are just positives
    //Range to store integers in both signed and unsigned differs look it up
    cout<<"Size of long int"<<sizeof(li)<<endl;
    cout<<"Size of short int"<<sizeof(si)<<endl;
    cout<<"Size of signed int"<<sizeof(sgi)<<endl;
    cout<<"Size of unsigned int"<<sizeof(ugi)<<endl;
    return 0;
}