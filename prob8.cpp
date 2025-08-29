#include<iostream>
using namespace std;
int main(){
    int a =0;
    int b = 2;

    if(a-- > 0 && ++b >2){
        cout<< "stage1 - inside if ";
    }
    else{
        cout<<"stage1 - inside else";
    }
    cout<< a << " " << b << endl;
}

//stage1 - inside else -1 2