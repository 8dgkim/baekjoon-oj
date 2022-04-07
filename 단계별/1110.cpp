#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, num1, num2;
    int sum;
    int num = 0;
    int cycle = 0;
    int val;

    cin >> n;
    val = n;

    do {
        num1 = n / 10;
        num2 = n % 10;

        sum = num1 + num2;
        num = num2 * 10 + sum % 10;

        n = num;
        cycle++;
    } while (val != n);

    cout << cycle;

    return 0;
}
