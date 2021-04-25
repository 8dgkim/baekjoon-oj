#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<int> s;

    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(3);
    s.erase(5);

    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }

    auto it = s.find(5);

    if (it == s.end())
        cout << "can't find";

    return 0;
}