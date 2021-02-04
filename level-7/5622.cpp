#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char c[16];
    int time = 0;
    int i = 0;

    cin >> c;

    for (i = 0; c[i] != '\0'; i++) {
        if (c[i] == 'A' ||c[i] == 'B' || c[i] == 'C') time += 3;
        if (c[i] == 'D' ||c[i] == 'E' || c[i] == 'F') time += 4;
        if (c[i] == 'G' ||c[i] == 'H' || c[i] == 'I') time += 5;
        if (c[i] == 'J' ||c[i] == 'K' || c[i] == 'L') time += 6;
        if (c[i] == 'M' ||c[i] == 'N' || c[i] == 'O') time += 7;
        if (c[i] == 'P' ||c[i] == 'Q' || c[i] == 'R' || c[i] == 'S') time += 8;
        if (c[i] == 'T' ||c[i] == 'U' || c[i] == 'V') time += 9;
        if (c[i] == 'W' ||c[i] == 'X' || c[i] == 'Y' || c[i] == 'Z') time += 10;
    }

    cout << time << '\n';
    
    return 0;
}