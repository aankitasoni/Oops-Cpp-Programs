#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a = 34; 
    cout<<"The value of a was: "<<a<<endl;
    a = 45; 
    cout<<"The value of a is: "<<a<<endl;
    cout<<endl;
    /**********************Constants in C++ ****************************/
    const int d = 3;
    cout<<"The value of d was: "<<d<<endl;
    d = 45;                    // You will get an error because d is a constant
    cout<<"The value of d is: "<<d<<endl;
    cout<<endl;

    /**********************Manipulators in C++*************************/
    int x =3, y=78, z=1233;
    cout<<"The value of x without setw is: "<<x<<endl;
    cout<<"The value of y without setw is: "<<y<<endl;
    cout<<"The value of z without setw is: "<<z<<endl;
    cout<<"The value of x is: "<<setw(4)<<x<<endl;       // "setw" is used to specify the width of the output.
    cout<<"The value of y is: "<<setw(4)<<y<<endl;       // "setw(4)," which will set there width to "4".
    cout<<"The value of z is: "<<setw(4)<<z<<endl;


    /************************Operator Precedence*************************/
    int p =3, q=4;
    // int c = (a*5)+b;
    int r = ((((p*5)+q)-45)+87);
    cout<<r;
    return 0;
}
