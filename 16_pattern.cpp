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

     //print space
        int space=0;
        while(space<row){
            cout<<" ";
            space++;
        }
        //pRINT STAR 
        int col=num;
        while(col>=row){
            cout<<"*";
            col--;
        }
        cout<<endl;
        row++;

    }
}