/*
****
***
**
*
*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter no. : ";
    cin>>num;
    int row=1;
    while(row<=num){
        int col=num;
        while(col>=row){
            cout<<"*";
            col--;
        }
        cout<<endl;
        row++;
    }
}