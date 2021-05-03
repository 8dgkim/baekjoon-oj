#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int coin[10] = {0};
    int size = sizeof(coin) / sizeof(coin[0]);
    int n, k;
    int count = 0;
    int i;

    cin >> n >> k;

    for (i = 0; i < n; i++) {
        cin >> coin[i];
    }
    sort(coin, coin + size, greater<int>());

    for (i = 0; i < n; i++) {
        if (coin[i] == 0) {
            break;
        }
        if (k >= 0) {
            if (k >= coin[i]) {
                count += (k / coin[i]);
                k %= coin[i];
            }
        }
    }

    cout << count << '\n';

    return 0;
}