#include <iostream>
#include <vector>

using namespace std;

int getGcdIter(int a, int b) {
    int tmp;
    while (b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main() {
    int a_1, b_1, a_2, b_2;
    int numerator, denominator;
    
    cin >> a_1 >> b_1 >> a_2 >> b_2;
    
    numerator = a_1 * b_2 + a_2 * b_1;
    denominator = b_1 * b_2;
    
    int gcd = getGcdIter(numerator, denominator);
    
    numerator /= gcd;
    denominator /= gcd;
    
    cout << numerator << " "<< denominator << "\n";
    
    
    
    return 0;
}
