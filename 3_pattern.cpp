/*
1 2 3 
4 5 6      for n =3
7 8 9
*/
#include<iostream>
using namespace std;
int main()
{
    int num ,n =1;
    cout<<"Enter no . : "; 
       cin>>num;
    int row=1;
    while(row<=num){
        int col=1;
        while(col<=num){
            cout<<n<<" ";
            n++;
            col++;
        }
        cout<<endl;
        row++;
    }
}