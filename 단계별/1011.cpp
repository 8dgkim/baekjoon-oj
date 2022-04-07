#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, x, y;
    int dis, max, cnt;
    int i, j, k;

    cin >> t;

    for (i = 0; i < t; i++) {
        cin >> x >> y;

        dis = y - x;
        max = (int)sqrt(dis);
        
        if (max == sqrt(dis)) {
            cout << 2 * max - 1 << '\n';
        } else if (dis <= max * max + max) {
            cout << max * 2 << '\n';
        } else {
            cout << max * 2 + 1 << '\n';
        }

        dis = 0;
        max = 0;
    }
    
    return 0;
}