/*    DABBANG QN
1234554321
1234**4321
123****321
12******21
1********1
*/
#include<iostream>
using namespace std;
int main(){
       int num;
    cout<<"Enter a no. : ";
    cin>>num;
    int row=1; 
    int val=num;
    
    while(row<=num){
        //1st triangle
        int col=num;
        int value=1;
        while(col>=row){
            cout<<value;
            value++;
            col--;
        }
        //2nd triangle
        for(int i=1;i<=(row-1)*2;i++){
            cout<<"*";
        }

        //3rd triaangle 
        int col2=num;
        while(col2>=row){
            cout<<val;
            col2--;
            val--;
        }
        val=val+num-row;
        cout<<endl;
        row++;
    }

}