#include <bits/stdc++.h>

using namespace std;

int battle (long double x){
if(x<=1) return 1;
return 1 + battle(x/2);
}



int main (){
    cin.tie(0); cout.tie(0);
    long double x; cin >> x;

    cout << battle(x) << "\n";

    return 0;

}
