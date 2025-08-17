#include<iostream>
using namespace std;

int main() {
    int start, end, step; // three variable banye ha 
    cout << "Enter starting Fahrenheit: ";  //starting value example 0 
    cin >> start;
    cout << "Enter ending Fahrenheit: "; // ending value example 100
    cin >> end;
    cout << "Enter step value: "; // step value example 10 or 20
    cin >> step;

    cout << "\nFahrenheit\tCelsius\n";
    cout << "-------------------------\n";

    int f = start; // f faranite ki value ko represnt kar raha ha 
    while (f <= end) {     // loop jab tak chalaga jab tak ki f ki value end ki value sa choti ya barabar na ho jaye 
        float c = (f - 32) * 5.0 / 9.0;   //formula feranite to celcious
        cout << f << "\t\t" << c << endl; // print kara raha ha feranite ki value ka sath celsius ki value ko tab space ka sath 
        f += step;  // increment kar raha ha jo user na step ki value ma di ha 
    }

    return 0;
}
