/*
A
BB
CCC
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
        
        while(col<=row){    
            cout<<a;
            col++;            
        }
        cout<<endl;
        a++;       
        row++;
    }
}