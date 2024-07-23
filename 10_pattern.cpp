/*
ABC
BCD
CDE
*/
#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout<<"Enter no . : "; 
       cin>>num;
    int row=1;
    char a='A';
    while(row<=num){
        int col=1;
        
        while(col<=num){    
            cout<<a;
            col++;
            a++;
        }
        cout<<endl;
        a=a-(num-1);
        row++;
    }
}