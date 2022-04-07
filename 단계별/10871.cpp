#include <iostream>

#define SIZE 100000

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    int a[SIZE];

    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];

        if (x > a[i]) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
