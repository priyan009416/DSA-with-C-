#include<iostream>
using namespace std;
int main(){
    
    int n ;
    cout <<"enter a number : ";
    cin >> n ;
    int i = 1;
    while (i<n)
    {
        if (n%i==0)
        {
            cout<<"NOT PRIME for : "<<i<<endl;
        }
       
        else{
            cout<<"PRIME for : "<<i<<endl;
        }
         i = i+1;
    }
    
}
