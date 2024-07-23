/*
   *
  **
 ***
****
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
        //print space 
         int space=num-row;
         while(space){
            cout<<" ";
            space--;
         }
       
        //print star
       while(col<=row){
           cout<<"*";
           col++;    
        }
        cout<<endl;
        row++;
    }
}