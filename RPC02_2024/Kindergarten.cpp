#include<bits/stdc++.h>
using namespace std;
using vi =  vector<int>;

vi a;

void solve(){
    int swaps = 0, s = a.size();
    for (int i = 1; i < a.size() - 1; i++){
        for (int j = 0; j < s - i; j++){
            if (a[j] = a[j+1]) {swap(a[j], a[j + 1]); swaps++;}
        }
    }
    cout << swaps << '\n';
}

int main() {
    string s; cin >> s;
    for (char i: s) a.push_back(i-'0');
    solve();
}
