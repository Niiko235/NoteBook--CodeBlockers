#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;

void solve(){
  int n, c = 0; cin >> n;
  string s, t = ""; cin >> s;

  for (int i = 1; i <= n; i++){
    t += to_string(i);
  }

  if (t.size() - s.size() == 1){
    bool n = true;
    for (int i = 0; i < s.size(); i++){
      if (s[i] != t[i]){
        n = false;
        cout << t.substr(i, 1) << '\n';
        break;
      }
    }
    if (n) cout << t.substr(t.size() - 1) << '\n';
  }else{
    bool n = true;
    for (int i = 9; i < s.size(); i++){
      if (s[i] != t[i]){
        n = false;
        if (i % 2 == 1) cout << t.substr(i, 2) << '\n';
        else cout << t.substr(i-1, 2) << '\n';
        break;
      }
    }
    if (n) cout << t.substr(t.size() - 2) << '\n';

  }
}

int main(){
  solve();

}
