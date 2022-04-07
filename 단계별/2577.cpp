#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, mult;
    int count[10] = {};
    int num, i;

    cin >> a >> b >> c;
    mult = a * b * c;

    while (true) {
        num = mult % 10;

        for (i = 0; i < 10; i++) {
            if (num == i)
                count[i]++;
        }
        mult /= 10;

        if (mult == 0)
            break;
    }

    for (i = 0; i < 10; i++) {
        cout << count[i] << '\n';
    }
    
    return 0;
}
