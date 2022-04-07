#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int pack = 0;

    cin >> n;

    while (n % 5 != 0) {
        if (n < 0)
            break;
        n -= 3;
        pack++;
    }
    if (n >= 0)
        cout << pack + n / 5 << '\n';
    else
        cout << -1 << '\n';
    
    return 0;
}