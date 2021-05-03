#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<unsigned long long> list;
    unsigned long long m, n, x;
    unsigned long long minAngry = 0, sum = 0, remain = 0;
    unsigned long long less;
    int i;

    cin >> m >> n;

    for (i = 0; i < n; i++) {
        cin >> x;
        list.push_back(x);
        sum += x;
    }

    sort(list.begin(), list.end());

    remain = sum - m;

    for (int i = 0; i < n; i++) {
        less = min(list[i], remain / (n - i));
        remain -= less;
        minAngry += less * less;
    }

    cout << minAngry << '\n';

    return 0;
}