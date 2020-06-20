#include <bits/stdc++.h>

using namespace std;

void decode() {
	int n;
	cin >> n;
	int a = 0, b = 0;
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		if(x % 2 != i % 2) {
			if(i % 2 == 0) a++;
			else b++;
		}
	}
	if(a != b) cout << -1;
	else cout << a;
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
