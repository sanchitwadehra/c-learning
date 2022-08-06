#include <iostream>
using namespace std;

int main(){
    /*
    Arithmetic Operators
    */
    int i=10,j=20,k;
    //10    9      19    20    9     20    10    19
    k=i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout<<i<<endl;//10
    cout<<j<<endl;//20
    cout<<k<<endl;//-20

    /*
    Relational Operators 
    Examples of it are :-
    == gives true value if both operands are equal
    != gives true operands if both are not equal
    < true if right operand is big
    > true if left operand is big
    <= true if right operand is big or equal to the left operand
    >= true if left operand is big or equal to the right operand
    */ 

    return 0;
}