#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char letter[100] = {0};
    int count = 0;
    int i;

    cin >> letter;

    for (i = 0; letter[i] != '\0'; i++) {
        count++;
        if (letter[i] == 'c' && letter[i + 1] == '=') i += 1;
        if (letter[i] == 'c' && letter[i + 1] == '-') i += 1;
        if (letter[i] == 'd' && letter[i + 1] == 'z' && letter[i + 2] == '=') i += 2;
        if (letter[i] == 'd' && letter[i + 1] == '-') i += 1;
        if (letter[i] == 'l' && letter[i + 1] == 'j') i += 1;
        if (letter[i] == 'n' && letter[i + 1] == 'j') i += 1;
        if (letter[i] == 's' && letter[i + 1] == '=') i += 1;
        if (letter[i] == 'z' && letter[i + 1] == '=') i += 1;
    }
    
    cout << count << '\n';

    return 0;
}