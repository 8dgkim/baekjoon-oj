#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(5);
    pq.push(12);
    pq.push(1);
    pq.push(15);
    pq.push(10);
    pq.push(8);
    pq.push(7);

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    
    return 0;
}