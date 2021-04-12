#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long a, b, c;
    int x = 0;

    cin >> a >> b >> c;

    if (b >= c) {
        x = -1;
    } else {
        x = a / (c - b);
        x++;
    }
    
    cout << x << '\n';

    return 0;
}