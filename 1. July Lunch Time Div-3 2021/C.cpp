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

long long fac(ll n) {
	ll r = 1;
	for (ll i = n; i > n - 2; i--)
		r *= i;
	return r;
}

int main() {

	clock_t begin = clock();
	file_i_o();
	//.....
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int mx = INT_MIN;
		vector < int > vc(n), vc2(1000020, 0);

		for (int i = 0; i < n; i++) {
			cin >> vc[i];
			vc2[vc[i]]++;
			mx = max(mx, vc[i]);
		}

		ll res = fac(n);

		for (int i = 0; i <= mx; i++) {
			if (vc2[i] > 1) {
				res -= fac(vc2[i]);
			}
		}
		cout << res << endl;
	}


	//.....
#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC << " sec\n";
#endif
	return 0;
}