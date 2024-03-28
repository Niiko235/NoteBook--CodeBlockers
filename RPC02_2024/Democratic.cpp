#include<bits/stdc++.h>
using namespace std;
using vs =  vector<string>;

vs s; int j = 0;

void solve(){
    map<char, int> mp;
    for (char i: s[j]) mp[i]++;
    map<char, int>::const_iterator it = mp.begin();
    int min = it -> first;
    for (const auto& n : mp) if (mp[min] != n.second && mp[min] < n.second) min = n.first;
    //for (const auto& n : mp) cout << n.first << " " << n.second << "   ";
    cout << char(min);
    j++;
}

int main() {
    int n, m; cin >> n >> m;
    vs a(n);
    for (string &i: a) cin >> i;
    for (int i = 0; i < m; i++){
        string b = "";
        for (int j = 0; j < n; j++){
            b += a[j][i];
        }
        s.push_back(b);
    }
    while (m--)solve();
    cout << "\n";
}
