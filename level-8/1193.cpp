#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, sum = 0;
    int a = 0, b = 0;
    int i, j;

    cin >> x;

    for (i = 1; x >= 1; i++) {
        sum += i;
        
        if (x <= sum) {
            j = sum - x + 1;
            break;
        }
    }    

    if (i % 2 != 0) {
        a = j;
        b = i + 1 - j;
    }
    if (i % 2 == 0) {
        a = i + 1 - j;
        b = j;
    }

    cout << a << '/' << b << '\n';

    return 0;
}