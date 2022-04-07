#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    char word[101];
    int count = 0;
    char memory[26] = {0};
    int i, j, k;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> word;
        count++;

        for (j = 0; word[j] != '\0'; j++) {
            k = int(word[j]) - 97;

            if (memory[k] != 0 && word[j - 1] != word[j] && j > 0) {
                count--;
                break;
            }
            
            memory[k]++;
        }

        for (k = 0; k < 26; k++) {
            memory[k] = 0;
        }
    }

    cout << count << '\n';

    return 0;
}