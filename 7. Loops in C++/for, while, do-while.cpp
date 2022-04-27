#include <iostream>
using namespace std;

int main () 
{
  
    /*Loops in C++:
       There are three types of loops in C++:
       1. For loop
       2. While Loop
       3. do-While Loop
     */ 
    
    /***************************For loop in C++*******************************/ 
  int i = 1;
cout << i;
i++;
cout << endl;
 
    // Syntax for for loop
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }
    cout << endl;
  
for (int a = 0; a <= 10; a++)
    {
	/* code */ 
	cout << a << endl;   
} 
 
    // Example of infinite for loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }
    
    /**************************While loop in C++*****************************/ 
    // Syntax:
    // while(condition)
    // {
    //     C++ statements;
    // }
    
    // Printing 1 to 15 using while loop
    cout << endl;
  
int b = 0;
while (b <= 15)
    {   
cout << b << endl;  
b++; 
}
  
 
    // Example of infinite while loop
    // int p = 1;
    // while (true)
    // {
    //     cout << p << endl;
    //     p++;
    // }
    
    /***************************do While loop in C++*************************/ 
    // Syntax:
    // do
    // {
    //     C++ statements;
    // }while(condition);
    
    //  Printing 1 to 20 using while loop
    
cout << endl;
int c = 0;
  do
    { 
cout << c << endl; 
c++;
}
  while (c <= 20);
return 0;

}


