#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter any numner : ";
    cin>>n;  

    int row  = 1; 
    
     while (row<=n)  //ye row ka chalega
     {
    
        int col = 1;
        char st = 'A'+n-row; 
        while (col<=row)//ye column ka liye4 chalega 
        {
           
           cout<< st;
           st = st +1;
           col = col+1;
        }
        cout<<endl;
     row = row+1;
     }
    }   