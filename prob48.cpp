#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> v,int m){
int s= m+1,e =v.size()-1;
while (m<=e)
{
    swap(v[m],v[e]);
    m++;
    e--;
}
return v;
}
void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
    cout<<v[i]<< " ";
}
cout<<endl;
}
int main()
{

    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans = reverse(v,2);
    
    cout<<"reverse an array"<<endl;
    print(ans);
}