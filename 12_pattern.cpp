/*
A
BC
CDE
DEFG
*/
#include<iostream>
using namespace std;
int main(){
    int num;
    int row=1;
    cout<<"Enter a no. :";
    cin>>num;
    
    while(row<=num){
       int col=1;
       while(col<=row){
        char value='A'+(row+col-2);
           cout<<value;
           col++;
       }
       cout<<endl;
      
       row++;
       
    }
}