#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if (1 <= n <= 9) {
        for (int i = 1; i <= 9; i++) {
            cout << n << " * " << i << " = " << n*i << endl;
        }
    }
}