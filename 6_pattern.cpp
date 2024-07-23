/*
1
23
456
78910
*/
#include<iostream>
using namespace std;
int main()
{
    int num ,count=1 ;
    cout<<"Enter no . : "; 
       cin>>num;
    int row=1;
    while(row<=num){
        int col=1;
        while(col<=row){
            cout<<count<<" ";
            col++;
            count++;
        }
        cout<<endl;
        row++;
    }
}