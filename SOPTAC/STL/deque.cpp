#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_front(4);

    cout << dq.front() << " " << dq.back() << "\n";

    dq.pop_back();
    dq.pop_front();
    
    cout << dq.front() << " " << dq.back() << '\n';
    
    return 0;
}