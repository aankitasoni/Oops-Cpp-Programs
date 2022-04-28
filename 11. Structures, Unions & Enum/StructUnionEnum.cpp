#include<iostream>
using namespace std;

typedef struct employee   // struct (structures) used to combine different types of data types.
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;   // ep use as a shortcut of typedef struct employee.

union money    
{
    /* data */          // only use 1 variable at a time.
    int rice; //4      // The compiler chooses the data type which has maximum memory for the allocation.
    char car; //1
    float pounds; //4
};


int main(){
    enum Meal{ breakfast, lunch, dinner};  // Enums are used to make the program more readable. 
    Meal f1 = lunch;
    cout<<(f1==2)<<endl;
    cout<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    cout<<endl;
    
    
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car<<endl;
    cout<<endl;

    ep harry;
    struct employee shubham;
    struct employee rohanDas;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;
    cout<<"The value is "<<harry.eId<<endl; 
    cout<<"The value is "<<harry.favChar<<endl; 
    cout<<"The value is "<<harry.salary<<endl; 
    return 0;
}
