#include<bits/stdc++.h>
using namespace std;
using vi =  vector<int>;
using ll = long double;

void solve(){
    ll n, m, k; cin >> n >> m >>k;
    ll sum = 0, av = 0, es = 0;
    vi a(n);
    for (int &i: a) {cin >> i; av += i;}
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < min(m + k, n); i++) es += a[i];
    cout << setprecision(11);
    cout << (es / av * 100) << '\n';
}

int main() {
    solve();
}
