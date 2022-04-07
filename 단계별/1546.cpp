#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, max;
    double score[1000] = {};
    double cheat[1000] = {};
    double sum, avg;
    int i, j;

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> score[i];      
    }

    max = score[0];
    for (i = 0; i < n; i++) {
        if (max < score[i])
            max = score[i];
    }

    sum = 0;
    for (i = 0; i < n; i++) {
        cheat[i] = (score[i] / max) * 100;
        sum += cheat[i];
    }

    avg = sum / n;
    cout << avg;
    
    return 0;
}