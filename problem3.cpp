#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100005;

int ind[N], p[N], _n, k;

int go(int r) {
	
	if (r == 1)
		return ind[r];
		
	for (int i = 1; i <= r; i += 2)
		if (p[i] >= p[i + 1]) {
			p[(i + 1) / 2] = min(p[i], p[i] - p[i + 1] + k);
			ind[(i + 1) / 2] = ind[i];
		}
		else {
			p[(i + 1) / 2] = min(p[i + 1], p[i + 1] - p[i] + k);
			ind[(i + 1) / 2] = ind[i + 1];
		}
	return go(r / 2);
}

int main()
{
	
	freopen("input_3.txt", "r", stdin);
	freopen("output_3.txt", "w", stdout);
	
	int t, ti = 1;
	cin >> t;
	while (t--) {
		cin >> _n >> k;
		int n = 1;
		while (_n) {
			n *= 2;
			_n--;
		}
		for (int i = 1; i <= n; i++) {
			cin >> p[i];
			ind[i] = i;
		}
		cout << "#" << ti << " " << go(n) << endl;
		ti++;
	}
}

