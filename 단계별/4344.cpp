#include <iostream>
#include <iomanip>

#define INTEGER 1000

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int c, n, count = 0;
    int grade[INTEGER] = {0};
    double avg, sum, portion = 0;
    int i, j, k;

    cin >> c;

    for (i = 0; i < c; i++) {
        cin >> n;
        
        for (j = 0; j < n; j++) {
            cin >> grade[j];
            
            sum += grade[j];
        }
        avg = sum / n;
        
        for (k = 0; k < n; k++) {
            if (avg < grade[k]) {
                count++;
            }
        }
        portion = (double(count) / double(n)) * 100;

        cout << fixed << setprecision(3) << portion << "%" << '\n';

        avg = sum = portion = count = 0;
    }

    return 0;
}
