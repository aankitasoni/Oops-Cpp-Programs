#include<iostream>
using namespace std;

// Function prototype --> help us to define a function after the function call.
// type function-name (arguments);   
// int sum(int a, int b); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable 

int sum(int, int);         //--> Acceptable 

// void g(void); //--> Acceptable 

void g();                 //--> Acceptable 

int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    
    // The values which are passed to the function are called actual parameters.
    // num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1, num2);
    g();
    return 0;
}

int sum(int a, int b){
 
     // The variables which are declared in the function are called a formal parameter.
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2.
    
    int c = a+b;
    return c;
}

void g(){             // The void keyword specifies that the function doesn't return a value.
    cout<<"\nHello, Good Morning";
}
