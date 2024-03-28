#include<bits/stdc++.h>
using namespace std;
using vi = vector<double>;


void solve(){
    int n, mile = 0, juice = 0, i = 0; cin >> n;
    //vi a(n);
    int a;
    while(n--){
        cin >> a;

         mile += (a /30 + 1)*10;
        juice += (a /60 + 1)*15;
    }

    //cout << mile << "  " << juice;
    if (mile > juice ) cout <<"Juice "<< juice<<'\n';
    else if (mile < juice) cout <<"Mile "<< mile<<'\n';
    else cout <<"Mile Juice "<< mile<<'\n';
}
int main (){
    //freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {cout << "Case "<< i << ": "; solve();}
}
