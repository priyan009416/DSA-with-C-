#include <iostream>
using namespace std;
void reverse(int arr[][3])
{

for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose (row-col swap)
    for(int i=0; i<3; i++){
        for(int j=i; j<3; j++){   // j=i se start karte hain taaki double swap na ho
            swap(arr[i][j], arr[j][i]);
        }
    }
// reverse kiya ha ab 
for(int i=0; i<3; i++){
    int start=0, end=2;
    while(start < end){
        swap(arr[i][start], arr[i][end]);
        start++;
        end--;
    }
}
    cout << "90 degree rotate gaya -->"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


}

int main()
{

     int arr[3][3];

    // input from row wise
cout<<"90 degree rotate karna elemement da --->"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "enter " << i << " row  element : ";
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

reverse(arr);
}