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
    
    /*
    Logical Operators
    && AND gives true if both operands are true or else gives false
    || OR gives true if atleast one of the operands are true
    ! NOT gives the opposite logical value of the operand true becomes 
      false and false becomes a true
      For Example :- !(1)=0 !(0)=1 !(2)=0 !(3)=0 and so on
    */
    
    /*
    Bitwise Operators
    & AND operator 0101 & 0110 gives 0100
    | OR operator 0101 | 0110 gives 0111
    ^ XOR operator 0101 XOR 0110 gives 0011
    ~ Ones Complement ~0101 gives 1010
    << Left shift operator 4<<1 so it will shift
       every bit by 1 to left 4(0100) will give 1000 after 
       shifting which is 8(1000)
    >> Right shift operator 4>>1 so it will shift
       every bit to right by 1 4(0100) will give 2(0010)
      So if you see carefully What happens here is this :-
      a<<n gives a*2^n
      a>>n gives a/2^n
    */
    
    /*
    Assignment Operators
    = Assigns value of right operand to the left operand
    += Assigns sum of two operands two left operand
    -= Assigns difference of two operand to left operand
    *= Assigns products of two operand to left operand 
    /= Assigns quotient of two opernds to left operand
    */
    
    /*
    Miscellenious Operators
    sizeof() returns the size of variables
    condition?x:y Also known as ternary/Conditionary operator
      returns value of x if condition is true and y if 
      condition is falseq
      For Example :-
      int a = 10;
      int b = 5;
      int c=a>b?a-b:b-a
    cast converts one data type to another
      For Example :-
      char ch='a'
      int(ch)
      It will gove output of 97 as per the ASCII table
    Comma(,) Causes a sequence of operators to be performed
      For Example :-
      a=(2,3,4) 
      It will assign 4 to a because a was assigned
      values in a sequence as written in the bracket
    & returns the address of a variable
    * Pointer to a variable
      to be explained afterwards
    */
    return 0;
}