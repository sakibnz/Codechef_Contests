#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define vi vector < int >
#define vll vector < long long >
#define pb push_back
#define eb emplace_back
#define mp make_pair

void debug(int arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void file_i_o() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

}

int main() {

	clock_t begin = clock();
	file_i_o();
	//.....
	int t;
	cin >> t;
	while (t--) {
		int n, d, h;
		cin >> n >> d >> h;
		int sum = 0, flag = 0;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			if (x > 0) sum += x;
			else {
				sum -= d;
				if (sum < 0) sum = 0;
			}

			if (sum > h) {
				flag = 1;
			}
		}
		if (flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}


	//.....
#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC << " sec\n";
#endif
	return 0;
}