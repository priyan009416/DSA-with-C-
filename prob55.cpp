#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << num << endl;
    int *ptr = &num; //*ptr ka mtlb ha ye add ki value ko print karega add ko nhi
    cout << "address of num is : " << &num << endl;
    cout << "adress of : " << *ptr << endl;

    // agr ham ptr likh kar print karat toh address hi print hota -->
    //(*) ye vo address kiska ha ha ye batata ha -->

    // double type  pointer

    double d = 2.5;
    double *p2 = &d;
    cout << "address of num is : " << p2 << endl;
    cout << "adress of : " << *p2 << endl;

    // size of integer and pointer -->
    cout << "size of integer is : " << sizeof(num) << endl;
    cout << "size of pointer is : " << sizeof(*ptr) << endl;
    cout << "size of double pointer is : " << sizeof(*p2) << endl;
}