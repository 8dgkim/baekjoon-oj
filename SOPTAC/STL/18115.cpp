#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque<int> deck, tech;
    int n = 0, x = 0;
    int temp = 0;
    int i;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> x;
        tech.push_back(x);
    }

    x = 0;

    for (i = 1; i <= n; i++) {
        x = tech.back();
        tech.pop_back();

        if (x == 1) {
            deck.push_front(i);
        } else if (x == 2) {
            temp = deck.front();
            deck.pop_front();
            deck.push_front(i);
            deck.push_front(temp);
        } else if (x == 3) {
            deck.push_back(i);
        }

        temp = 0;
    }

    for (i = 1; i <= n; i++) {
        cout << deck.front() << " ";
        deck.pop_front();
    }
    
    return 0;
}