/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/

#include<iostream>
using namespace std;
int main(){
       int num;
    cout<<"Enter a no. : ";
    cin>>num;
    int row=1; 
    while(row<=num){
        //space
        int space=num-1;
        while (space>=row){
            cout<<" ";
            space--;
        }
        //1st triangle
        int col=1;
        int value=1;
        while(col<=row){
            cout<<value;
            value++;
            col++;
        }
        //2nd triangle
        int start=row-1;
        while(start){
           cout<<start;
           start--;
        }
        cout<<endl;
        row++;
        
    }
}