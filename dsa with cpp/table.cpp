#include<iostream>
using namespace std;

void table(int n)  // return type void kyunki print kar rahe hain
{
    for(int i = 1; i <= 10; i++){
        int mul = n * i;
        cout << n << " * " << i << " = " << mul << endl;
    }
}

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;

    table(n);  // function call
}
