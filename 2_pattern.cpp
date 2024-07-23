/*
3 2 1
3 2 1
3 2 1
*/
#include<iostream>
using namespace std;
int main()
{
    int num, i=1;
    cout<<"Enter no . : "; 
       cin>>num;
    while(i<=num){
        int j=num;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
}