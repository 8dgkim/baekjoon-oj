#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string sentence;
    int word = 0;
    int i = 0;

    getline(cin, sentence);

    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            word++;
        }
    }

    if (sentence[0] == ' ') {
        word--;
    }
    if (sentence[(int)sentence.length() - 1] == ' ') {
        word--;
    }

    cout << word + 1 << '\n';


    return 0;
}