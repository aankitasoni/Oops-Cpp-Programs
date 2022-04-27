#include<iostream>
using namespace std;

int main(){
    for (int a = 0; a < 40; a++)
    {
        /* code */
        if(a==2){
            break;
        }
        cout<<a<<endl;
    }
    cout<<endl;
    for (int i = 0; i <= 20; i++)
    {
        /* code */
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }

    
    return 0;
}
