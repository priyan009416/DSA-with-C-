#include <iostream>
using namespace std;
int main()
{

    //     int *p = 0;
    //  cout<<*p<<endl;

    // int i =5;
    // int *p = 0;
    // p =&i;

    //  cout<<p<<endl;
    //  cout<<*p<<endl;

    float f = 10.5;
    float p = 2.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;

    cout << *ptr << " " << f << " " << p;
}