/*
D
CD
BCD
ABCD
*/
#include<iostream>
using namespace std;
int main(){
    int row=1;
    int num;
    cout<<"Enter a no. ";
    cin>>num;
    while(row<=num)
    {
        int col=1;
        while(col<=row){
            char value='A'+num-1-row+col;
            cout<<value;
            col++;
        }
        cout<<endl;
        row++;
    }
}