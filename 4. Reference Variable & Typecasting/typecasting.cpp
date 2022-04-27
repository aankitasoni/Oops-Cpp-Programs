#include<iostream> 
using namespace std;

int c = 45;

int main(){
    
    // *************Build in Data types****************
    int a, b, c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    c = a + b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c<<endl;  // scope resolution operator "::" --> to access the value of the global variable
    cout<<endl;

    // ************* Float, double and long double Literals****************
    float d=34.4F;
    long double e = 34.4L; 
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;  // 34.4 is double by default and not float
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;  
    cout<<endl;

    // *************Reference Variables**************** 
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<endl;

    // *************Typecasting**************** 
    int p = 45;   
    float q = 45.46;
    cout<<"The value of p is "<<(float)p<<endl;    // two ways to typecast a variable, either using "(float)a" 
    cout<<"The value of p is "<<float(p)<<endl;    // or using "float(a)"

    cout<<"The value of q is "<<(int)q<<endl;
    cout<<"The value of q is "<<int(q)<<endl;
    int r = int(q);

    cout<<"The expression is "<<p + q<<endl;
    cout<<"The expression is "<<p + int(q)<<endl;
    cout<<"The expression is "<<p + (int)q<<endl;


    return 0;
}
