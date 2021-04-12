#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, count = 0;
    int i, j;

    cin >> n;

    if (n == 1) {
        count = 1;
        i = 1;
    }

    for (i = 1; n > 1; i++) {
        if (i == 1) {
            count = 1;
        }
        if (i >= 2) {
            count += (i - 1) * 2 * 3;
        }
        if (n <= count) {
            break;
        }
    }

    cout << i << '\n';
    
    return 0;
}
