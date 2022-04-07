#include <iostream>

#define LENGTH 80

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    char result[LENGTH] = {0};
    int score, sum = 0;
    int i, j;

    cin >> t;

    for (i = 1; i <= t; i++) {
        cin >> result;

        for (j = 0; result[j] != '\0'; j++) {
            if (result[j] == 'O') {
                score++;
            } else {
                score = 0;
            }
            sum += score;
        }

        cout << sum << '\n';
        sum = score = 0;
    }

    return 0;
}