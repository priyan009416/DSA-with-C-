#include <iostream>
using namespace std;
int main()
{
    int i = 5;

    int *ptr = &i; // single pointer-->  iska address alag hoga !

    cout << "print the address of i : " << ptr << endl;

    int **ptr2 = &ptr; // double pointer --> iska address alag hoga! !

    cout << "print the address of ptr : " << ptr2 << endl;

    cout << **ptr2 << endl;

    
}