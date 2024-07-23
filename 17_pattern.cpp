/*
1 1 1 1
  2 2 2
    3 3
      4
*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a no. : ";
    cin>>num;
    int row=1;
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
            cout<<row;
            col--;
        }
        cout<<endl;
        row++;
       
    }
    
}