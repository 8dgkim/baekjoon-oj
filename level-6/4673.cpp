#include <iostream>

#define SIZE 10000

using namespace std;

int intToArr(int n, int *arr)
{
    int i;

    for (i = 0; i < 5; i++) {
        arr[i] = n % 10;
        n /= 10;
    }

    return *arr;
}

int d(int n, int gen[])
{
    int sum = 0;
    int i;

    for (i = 0; i < 5; i++) {
        sum += gen[i];
    }

    return n + sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[5] = {0};
    int number[SIZE] = {0};
    int i, j;
    int df;

    for (i = 0; i < SIZE; i++) {
        number[i] = i + 1;
    }

    for (i = 1; i <= SIZE; i++) {
        *arr = intToArr(i, arr);

        df = d(i, arr);
        
        for (j = 0; j < SIZE; j++) {
            if (number[j] == df) {
                number[j] = 0;
            }
        }
    }

    for (i = 0; i < SIZE; i++) {
        if (number[i] != 0) {
            cout << number[i] << '\n';
        }
    }

    return 0;
}