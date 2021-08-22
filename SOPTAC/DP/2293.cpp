#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int coin[101] = {};
    int arrSize = sizeof(coin) / sizeof(coin[0]);
    int n, k;
    int num;
    int value;
    int chance;
    int i;

    cin >> n >> k;

    for (i = 0; i < n; i++) {
        cin >> coin[i];
    }
    sort(coin, coin + arrSize, greater<int>());

    for (i = 0; i < n; i++) {
        cout << coin[i] << '\n';
    }

    

    return 0;
}