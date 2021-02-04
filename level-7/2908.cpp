#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    int x, y;

    cin >> a >> b;

    string A = to_string(a);
    string B = to_string(b);

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    x = stoi(A);
    y = stoi(B);

    if (x > y) {
        cout << x << '\n';
    } else if (y > x) {
        cout << y << '\n';
    }

    return 0;
}