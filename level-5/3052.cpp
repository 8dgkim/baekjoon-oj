#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input[10], output[10] = {};
    int mod = 42;
    int i, j, count;

    for (i = 0; i < 10; i++) {
        cin >> input[i];
        output[i] = input[i] % mod;
    }

    count = 0;
    for (i = 0; i < mod; i++) {
        for (j = 0; j < 10; j++) {
            if (output[j] == i) {
                count++;
                break;
            }
        }
    }

    cout << count;

    return 0;
}
