  #include<iostream>
  using namespace std;
  int main(){
    int a , b;
    cout<< "Enter any value : " ;
    cin>>a;
    cout<<"Enter any value : " ;
    cin>>b;
    char oper;
    cout<<"Enter operation (+,-,*,/,%) : " ;
    cin>>oper;

    switch( oper )
    {
    case '+' : cout << "Your answer is " << (a+b) <<endl;
         break;
    case '-' :cout << "Your answer is " <<  (a-b) <<endl;
         break;
    case '*' :cout << "Your answer is " <<  (a*b) <<endl;
        break;
    case '/' :cout << "Your answer is " <<  (a/b) <<endl;
         break;
    case '%' :cout << "Your answer is " <<  (a%b) <<endl;
         break;

    default: cout<< "Please enter valid oprator "<<endl;
    }
  }