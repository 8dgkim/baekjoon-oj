#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    do {
        cin >> a >> b;
        if (a + b != 0)
            cout << a + b << '\n';
    } while (a != 0 && b != 0);
    
    return 0;
}
