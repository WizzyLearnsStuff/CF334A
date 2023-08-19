#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int k = n * n + 1;
	int p = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n / 2; j++) {
			cout << p << " " << (k - p) << " ";
			p++;
		}
		cout << '\n';
	}
}
