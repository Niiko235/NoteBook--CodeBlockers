#include <bits/stdc++.h>

using namespace std;

int main (){
    string a, b;
    cin >> a >> b;
    int i;
    for( i = 1 ; i <= 100 ; i++){
        if(a == b) break;
        int cnt[10] = {};
        for(char c : a){
            cnt[c - '0']++;
        }
        a = "";
        for(int d = 0; d < 10 ; d++){
            if(cnt[d] > 0){
                a += to_string(cnt[d]) + char(d + '0');
            }
        }
    }
    if (i>100) {
        cout << "Does not appear" << endl;
    }else{
        cout << i << endl;
    }

    return 0;
}
