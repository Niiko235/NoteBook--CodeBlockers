#include<bits/stdc++.h>
using namespace std;

vector<pair<char, vector<int>>> a(30);

string abc = "abcdefghijklmnopqrstuvwxyz";

void solve(){
    char c, d; cin >> c >> d;
    for (int i = 0; i < 26; i++){
        if (abc[i] == c) abc[i] = d;
    }
}
// atcoder a -> r
int main (){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, q; cin >> n;
    string s, t("a", n); cin >> s >> q;

    while(q--) solve();

    for(char i: s){
        cout << abc[i - 'a'];
    }
    //cout << t << '\n';
}
