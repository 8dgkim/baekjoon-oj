#include <iostream>

using namespace std;

int main()
{
    int h, m;

    cin >> h >> m;

    if (0 <= h <= 23 && 0 <= m <= 59) {
        m -= 45;
        if (m < 0) {
            int m1 = 60 + m;
            h -= 1;
            if (h < 0) {
                int h1 = 24 + h;
                cout << h1 << " " << m1 << endl;
            } else {
                cout << h << " " << m1 << endl;
            }
        } else {
            cout << h << " " << m << endl;
        }
    }
}
