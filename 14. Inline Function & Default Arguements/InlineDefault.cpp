#include<iostream>
using namespace std;

/* Inline functions are used to reduce the function call 
--> one function is being called multiply times in the program it increases the execution time. 
--> use when the function is small otherwise it will not perform well.
*/

inline int product(int a, int b){
    // Not recommended to use below lines with inline functions
    // static int c=0; // This executes only once
    // c = c + 1; // Next time this function is run, the value of c will be retained
    return a*b;
}

/* Default arguments are those values which are used by the function if we don’t input our value. */

float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}

/* Constant arguments are used when you don’t want your values to be changed or modified by the function. 
   int strlen(const char *p){

    } */
    
int main(){
    int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";
    return 0;
}
