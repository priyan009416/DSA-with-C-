#include<iostream>
using namespace std;
int main()
{
    int n =1 ; 
    cout<<"Enter any number : ";
    cin >> n;
    int a = 0;
    int b = 1;
    for(int i = 1; i<=n ; i++){
        int j = a+b;
        cout<<j<<" ";

        a = b;
        b = j;
    }
}