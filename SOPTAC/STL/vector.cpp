#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v1;
    vector<int> v2(6, 1);
    vector<int> v3 = {1, 2, 3, 4, 5};
    int i;

    vector<int> a = {1, 2, 3, 4, 5};
    a.push_back(6);
    a.push_back(7);

    a.pop_back();

    // a.clear();

    // a.size();

    for (i = 0; i < a.size(); i++) {
        cout << a[i] << ' ';
    }
    
    return 0;
}