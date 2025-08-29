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
        while (col<=n)//ye column ka liye4 chalega 
        {
            char ch = 'A'+row+col-2;  //ye ascii value ka hisab sa chelaga
           cout<< ch;
           col = col+1;
        }
        cout<<endl;
     row = row+1;
     }
     
}