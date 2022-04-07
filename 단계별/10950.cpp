#include <iostream>

#define SIZE 1000000

using namespace std;

int * num(int num1, int num2, int count)
{
    int a = num1;
    int b = num2;
    int i = count;
    static int arr[SIZE];

    if (0 < a, b < 10) {
        arr[i] = a + b;
    }

    return arr;
}

int main()
{
    int t;
    int a, b;
    int *arr;

    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> a >> b;
        arr = num(a, b, i);
    }

    for (int j = 1; j <= t; j++) {
        cout << arr[j] << endl;
    }
}
