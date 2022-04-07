#include <iostream>

using namespace std;

int main()
{
    int a;

    cin >> a;

    if (0 <= a <= 100) {
        if (90 <= a)
            cout << "A" << endl;
        else if (80 <= a)
            cout << "B" << endl;
        else if (70 <= a)
            cout << "C" << endl;
        else if (60 <= a)
            cout << "D" << endl;
        else
            cout << "F" << endl;
    }
}
