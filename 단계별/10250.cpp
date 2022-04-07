#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int h, w, n;
    int t;
    int i;
    
    cin >> t;

    for (i = 0; i < t; i++) {
        cin >> h >> w >> n;

        if (n % h == 0) {
            if (n / h + 1 < 10 || n / h == 9) {
                cout << h << '0' << n / h << '\n';
            } else {
                cout << h << n / h << '\n';
            }
        } else if (n / h + 1 < 10 || n / h == 9) {
            if (n / h == 9) {
                cout << n % h << n / h + 1 << '\n';
            } else {
                cout << n % h << '0' << n / h + 1 << '\n';
            }
        } else {
            cout << n % h << n / h + 1 << '\n';
        }
    }

    return 0;
}
