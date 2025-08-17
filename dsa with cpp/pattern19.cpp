#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter any number : ";
    cin>>n;
    int row = 1;
    while (row<=n)
    {
        int space = 1;
        while (space<row)
        {
            cout<<" ";
            space = space +1;
        }
        
        int col = n;
        while (col>=row)
        {
            cout<<"*"; 
            col = col -1;

        }
       cout<<endl;
       row = row + 1;
    }
    
}
// *****
//  ****
//   ***
//    **
//     *
