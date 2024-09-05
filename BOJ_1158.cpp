#include <iostream>
#include <queue>

using namespace std;


vector<int> Josephus(int n, int k) { 
    vector<int> result; 
    queue<int> q; 

    
    for (int i = 1; i <= n; i++) { 
        q.push(i);
    }

    while (!q.empty()) {
       
        for (int i = 0; i < k - 1; i++) { 
            q.push(q.front());
            q.pop();
        }

    
        result.push_back(q.front());
        q.pop();
    }

    return result;
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, k;
    queue<int> q;

    
    cin >> n >> k;

    
    vector<int> result = Josephus(n, k);

    
    cout << "<" << result[0];
    for (int i = 1; i < n; i++) {
        cout << ", " << result[i];
    }
    cout << ">";

    return 0;
}
