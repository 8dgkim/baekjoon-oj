#include <iostream>

#define maxdigit 4

using namespace std;

int han(int num)
{
    if (num < 100) {
        return true;
    }
    if ((num / 10 % 10) * 2 == num % 10 + num / 100) {
        return true;
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, count = 0;
    int i;

    cin >> n;

    for (i = 1; i <= n; i++) {
        if (han(i) == true) {
            count++;
        }
    }

    cout << count << '\n';
    
    return 0;
}