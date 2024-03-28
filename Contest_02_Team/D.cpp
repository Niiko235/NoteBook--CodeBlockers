#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;

/*
 * Autor: madisktral
 *
*/

#define FOR1(a) for (ll _ = 0; _ < ll(a); ++_)
#define FOR2(i, a) for (ll i = 0; i < ll(a); ++i)
#define FOR3(i, a, b) for (ll i = a; i < ll(b); ++i)
#define FOR4(i, a, b, c) for (ll i = a; i < ll(b); i += (c))
#define FOR1_R(a) for (ll i = (a)-1; i >= ll(0); --i)
#define FOR2_R(i, a) for (ll i = (a)-1; i >= ll(0); --i)
#define FOR3_R(i, a, b) for (ll i = (b)-1; i >= ll(a); --i)
#define overload4(a, b, c, d, e, ...) e
#define overload3(a, b, c, d, ...) d
#define FOR(...) overload4(_VA_ARGS, FOR4, FOR3, FOR2, FOR1)(VA_ARGS_)
#define FOR_R(...) overload3(_VA_ARGS, FOR3_R, FOR2_R, FOR1_R)(VA_ARGS_)
#define sort(a) sort(a.begin(), a.end());

void YES(bool t = 1) { cout << (t ? "YES" : "NO") << '\n'; }
void NO(bool t = 1) { YES(!t); }
void Yes(bool t = 1) { cout << (t ? "Yes" : "No") << '\n'; }
void No(bool t = 1) { Yes(!t); }
void yes(bool t = 1) { cout << (t ? "yes" : "no") << '\n'; }
void no(bool t = 1) { yes(!t); }

template <typename T>
void show(vector<T> a){for (T i: a) cout << i << " ";}
template <typename T>
vector<T> fill(vector<T> a){for (T &i: a) cin >> i; return a;}
vi a;
void solve(){
    int op, value; cin >> op >> value;
    if (op == 1) a.push_back(value);
    else cout << a[a.size() - value] << '\n';

}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	//freopen("input.txt", "r", stdin);
	int n; cin >> n;
	while (n--) solve();
    //show(a);
	return 0;
}
