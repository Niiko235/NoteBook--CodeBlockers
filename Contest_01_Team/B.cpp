#include <bits/stdc++.h>

#define hg 1e3

using namespace std;


int count(string q){
multiset<char> ex;
    for(int i = 0; i <q.size();x++){
        ex.insert(q[i]);
    }
    return ex.count('T');

}


int main(){
    int lower = hg;
    int n, k; cin >> n >> k;
    string q;
    int c;
    int anws = 0;
    for(int i = 1; i<=n;i++ ){
        cin >> q;
        c =count(q);
        if(c<lower){
            anws = i;
            lower = c;
        }
    }


    cout << anws << "\n";



    return 0;
}
