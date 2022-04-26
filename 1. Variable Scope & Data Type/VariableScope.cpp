/* 
There are 2 types of variable scope
1. Local variables are declared inside the braces of any function and can be assessed only from there. 
2. Global variables are declared outside any function and can be accessed from anywhere.

There are 3 types of data type :-
1. Built-in Data Types in C++: Int, Float, Char, Double, Boolean
2. User-Defined Data Types in C++: Struct, Union, Enum
3. Derived Data Types in C++: Array, Pointer, Function
*/

# include<iostream>
using namespace std;

int glo = 6;
void sum(){
    int a; 
    cout<< glo<<endl;
    }

int main(){
    int glo=9;
    glo=78; //78 to the variable "glo" which update the previous "glo" value 9.
    // int a = 14;
    // int b = 15;
    int a=14, b=15;
    float pi=3.14;
    char c ='d';
    bool is_true = true;
    sum();
    cout<<glo<<endl<<is_true; 
    /* The output 6 is from the cout of "glo" in sum function, 
    the output 78 is from the cout of "glo" in the main function,
    and the output 1 is from the cout of "is_true" Boolean variable in the main function. */
    
    return 0;
}
