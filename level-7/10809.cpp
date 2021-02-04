#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int i, j;
    int count = -1;

    getline(cin, s);

    for (i = 97; i <= 122; i++) {
        for (j = 0; j < s.length(); j++) {
            if (s[j] == (char)i) {
               count = j;
               break;
            }
        }
        cout << count << " ";

        count = -1;
    }

    return 0;
}
