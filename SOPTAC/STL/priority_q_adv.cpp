#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

typedef pair<int, string> student;

struct cmp {
    bool operator()(student &a, student &b) {
        return a.second > b.second;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<student, vector<student>, cmp> pq;

    pq.push({ 1, "jerry" });
    pq.push({ 2, "tom" });
    pq.push({ 3, "lisa" });
    pq.push({ 4, "bob" });
    pq.push({ 5, "key" });

    while (!pq.empty()) {
        cout << pq.top().first << " " << pq.top().second << "\n";
        pq.pop();
    }
    
    return 0;
}