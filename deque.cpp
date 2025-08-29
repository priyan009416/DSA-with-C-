#include <iostream>
#include <deque>
using namespace std;
int main()
{

    deque<int> d;

    // value  nikalna ka liya
    // d.push_back(1);
    // d.push_front(2);
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // d.pop_back();
    // cout << endl;
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }

    // value dalna ka liya
    d.push_front(3);
    d.push_back(1);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    // 0 mtlb false and 1 mtlb true
    cout << "empty or not : " << d.empty() << endl;

    // deque ko khali karn ka liya erase funstion ka use krta ha !

    cout << "before erase : " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After erase : " << d.size() << endl;
}
