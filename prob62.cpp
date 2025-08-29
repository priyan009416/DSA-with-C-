#include <iostream>
using namespace std;
// macros bna ha -->
#define pi 3.14

int score = 15; // globkle variable --->
void a(int &i)
{
    char ch = 'a'; // ye local variable -->
    cout << i << endl;
    //  b(i);
}

void b(int &i)
{
    cout << i << endl;
}

int main()
{

    // macros --->

    int r = 5; // local variable -->
    // double pi = 3.14;
    double area = pi * r * r;
    cout << "area is " << area << endl;

    // globle variable --->

    int i = 5;
    a(i);

    return 0;
}