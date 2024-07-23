/*
1 2 3 4
  2 3 4
    3 4
      4
*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a no. : ";
    cin>>num;
    int row=1;
    int value=1;
    while (row<=num)
    {
       //space
       int space=0;
       while(space<row){
        cout<<" ";
        space++;
       }
       int col=num;
       
        while(col>=row){
            cout<<value;
            col--;
            value++;
        }
        value=value-num+1;
        cout<<endl;
        row++;
       
    }
    
}