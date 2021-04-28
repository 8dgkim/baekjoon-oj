#include <iostream>

using namespace std;

int dice[10001][7];
int maxVal[10001];
int opposite[6] = { 5, 3, 4, 1, 2, 0 };
int i, j, k;

void side(int current_dice, int current_side, int total_dice)
{
    int bottom = 0, top = 0, max = 0;
    int next_dice = current_dice + 1;
    int next_side = 0;

    bottom = dice[current_dice][current_side];
    top = dice[current_dice][opposite[current_side]];
    
    if (bottom + top == 11) {
        max = 4;
    } else if (bottom == 6 || top == 6) {
        max = 5;
    } else {
        max = 6;
    }
    maxVal[current_dice] = max;
    
    for (k = 0; k < 6; k++) {
        if (next_dice > total_dice) {
            break;
        } else {
            if (dice[next_dice][k] == top) {
                next_side = k;
            }
        }
    }

    if (current_dice == total_dice) {
        return;
    } else {
        side(next_dice, next_side, total_dice);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int record = 0, highest = 0;
    int n, face;

    cin >> n;

    for (i = 0; i < n; i++) {
        for (j = 0; j < 6; j++) {
            cin >> face;
            dice[i][j] = face;
        }
    }

    for (i = 0; i < 6; i++) {
        side(0, i, n);

        for (j = 0; j < n; j++) {
            record += maxVal[j];
        }
        
        if (record > highest) {
            highest = record;
        }
        record = 0;
    }

    cout << highest << '\n';

    return 0;
}