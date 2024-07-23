/*
1 2 3 4 
1 2 3 4
1 2 3 4 
1 2 3 4
*/
#include<iostream>
using namespace std;
int main()
{
    int num, i=1;
    cout<<"Enter no . : "; 
       cin>>num;
    while(i<=num){
        int j=1;
        while(j<=num){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

}