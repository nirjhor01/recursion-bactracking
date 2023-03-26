#include<bits/stdc++.h>
using namespace std;
#define int  long long int
int mn = 1e18;
int sum = 0;
int solve(int ind, int res, int n, std::vector<int> &v){
	if(ind >= n){
		int p = sum - res;
		mn = min(mn, abs(p - res));
		return 0;
	}
	solve(ind + 1, res + v[ind], n, v);
	solve(ind + 1, res, n, v);
	
	return mn;
	
	
}
signed main(){
	int n;
	cin >> n;
	std::vector<int> v(n);
	sum = 0;
	for(int i = 0; i < n; ++i){
		cin >> v[i];
		sum += v[i];
	}
	int res = 0;
	cout << solve(0, res, n,  v) << '\n';
}
