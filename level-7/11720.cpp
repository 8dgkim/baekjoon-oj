#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, sum = 0;
    string input;
    char num;
    int i;

    cin >> n;
    cin.ignore(256, '\n');

    getline(cin, input);

    for (i = 0; i < n; i++) {
        num = input[i];
        sum += num - '0';
    }
    
    cout << sum << '\n';
    
    return 0;
}