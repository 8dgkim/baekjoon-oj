#include <iostream>
#include <string>

#define SIZE 256

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int letter[SIZE] = {0};
    int count, check;
    char result = '?';
    long unsigned int i;

    count = check = 0;

    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }

    for (i = 0; i < s.length(); i++) {
        letter[s[i]]++;

        if (count <= letter[s[i]]) {
            count = letter[s[i]];
            result = s[i];
        }
    }

    check = -1;
    for (i = 0; i < SIZE; i++) {
        if (count == letter[i]) {
            check++;
        }
    }

    if (check > 0) {
        cout << "?" << '\n';
    } else {
        cout << result << '\n';
    }

    return 0;
}