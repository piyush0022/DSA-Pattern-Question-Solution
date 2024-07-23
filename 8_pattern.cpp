/*
1
21
321
4321
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
        int a=row;
        while(col<=row){
            cout<<a;
            col++;
            a--;
        }
        cout<<endl;
        row++;
    }
}