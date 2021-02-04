#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int p, r;
    int i, j, k;

    cin >> p;

    for (i = 0; i < p; i++) {
        cin >> r;
        cin.ignore();
        getline(cin, s);

        for (j = 0; j < s.length(); j++) {
            for (k = 0; k < r; k++) {
                cout << s[j];
            }
        }
        cout << '\n';
    }

    return 0;
}