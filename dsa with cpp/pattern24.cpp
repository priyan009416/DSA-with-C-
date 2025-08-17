#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    int row = 1;
    while (row<=n)
    {
        int space = n-row;
        while (space)
        {
            cout<<" ";
            space = space-1;
        }
        int col = 1;
        while (col<=row)
        {
            cout<< col;
            col = col+1;
            
        }
        int j = row - 1;
        while(j){
            cout<<j;
            j = j - 1;
        }
        cout<<endl;
        row = row+1;
    }
    
}