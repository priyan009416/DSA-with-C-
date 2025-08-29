#include <iostream>
using namespace std;

void update2(int &n)
{ // yaha value update hokar print hogi kyuki refference variable use ha
    n++;
}

void update1(int n)
{ // isma update nhi hoga
    n++;
}

int main()
{

    // int i = 5;

    // creating the reffrence variable using the &;

    // int& j = i;

    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++; //ye i hi ha but name change ha -->
    //  cout << j << endl;

    // cout << "before " << i << endl;
    // update2(i);
    // cout << "after " << i << endl;



}