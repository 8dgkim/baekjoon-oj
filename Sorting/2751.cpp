#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> list;
    int n, num, size;
    int i;

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> num;
        list.push_back(num);
    }

    sort(list.begin(), list.end());
    
    size = list.size();
    for (i = 0; i < size; i++) {
        cout << list[i] << '\n';
    }

    return 0;
}