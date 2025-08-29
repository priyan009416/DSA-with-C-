#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any numberc :";
    cin>>n;
    int row = 1 ;
    while (row<=n)
    {
        // ye space print karega!
        int space = n-row;
        while (space)
        {
            cout<<" ";
            space = space-1;
        }
        //ye star print karega !
        int col  = 1;
        while (col<=row)
        {
            cout<< row;
            col = col +1;
        }
        cout<<endl;
        row = row +1;
    }
}