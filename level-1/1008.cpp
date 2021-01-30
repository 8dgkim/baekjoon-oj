#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b;
    double div;
    cin >> a >> b;
    if (0 < a && b < 10) {
        div = a / b;
        cout << setprecision(20) << div;
    }
    else
        return 0;
}