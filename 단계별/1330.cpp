#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    if (-10000 <= a, b <= 10000) {
        if (a < b)
            cout << "<" << endl;
        else if (a > b)
            cout << ">" << endl;
        else if (a == b)
            cout << "==" << endl;
        else
            return 0;
    }
}