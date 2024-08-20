#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;


bool compareSerial(const string &a, const string &b) {
    
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }

   
    int sumA = 0, sumB = 0;
    for (char c : a) {
        if (isdigit(c)) {
            sumA += c - '0';
        }
    }
    for (char c : b) {
        if (isdigit(c)) {
            sumB += c - '0';
        }
    }
    if (sumA != sumB) {
        return sumA < sumB;
    }

   
    return a < b;
}

int main() {
    int N;
    cin >> N;

    vector<string> serials(N);
    for (int i = 0; i < N; ++i) {
        cin >> serials[i];
    }

   
    sort(serials.begin(), serials.end(), compareSerial);

   
    for (const string &serial : serials) {
        cout << serial << endl;
    }

    return 0;
}
