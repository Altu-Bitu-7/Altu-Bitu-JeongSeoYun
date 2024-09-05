#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addLargeNumbers(const string& a, const string& b) {
	string result;
	int carry = 0;
	int i = a.size() - 1, j = b.size() - 1;

	while (i >= 0 || j >= 0 || carry) {
		int sum = carry;
		if (i >= 0) sum += a[i--] - '0';
		if (j >= 0) sum += b[j--] - '0';
		result.push_back(sum % 10 + '0');
		carry = sum / 10;
	}

	reverse(result.begin(), result.end());
	return result;
}
int main() {
	string A, B;
	cin >> A >> B;

	string result = addLargeNumbers(A, B);
	cout << result << endl;

	return 0;
}
