/*
1 
22
333
4444
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
        while(col<=row){
            cout<<row<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}