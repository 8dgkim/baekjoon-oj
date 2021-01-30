#include <iostream>

using namespace std;

int * convertIntToArr(int num)
{
    int b = num;
    static int arr[3];

    for (int i = 2; i >= 0; i--) {
        arr[i] = b % 10;
        b /= 10;
    }

    return arr;
}

int main()
{
    int a, b;
    int *arr;

    cin >> a;
    cin >> b;

    if (100 <= a, b <= 999) {
        arr = convertIntToArr(b);
        
        for (int i = 2; i >= 0; i--) {
            cout << a * arr[i] << endl;
        }

        cout << a * b;
    }
}
