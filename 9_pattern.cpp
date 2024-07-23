/*
A B C
A B C
A B C
*/
#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout<<"Enter no . : "; 
       cin>>num;
    int row=1;
    while(row<=num){
        int col=1;
        char a='A';
        while(col<=num){
            
            cout<<a;
            col++;
            a++;
        }
        cout<<endl;
        row++;
    }
}