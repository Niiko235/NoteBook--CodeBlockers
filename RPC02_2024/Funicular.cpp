#include<bits/stdc++.h>
using namespace std;
const int inf = 1e9;
int p[1000000] = {}, suma=0;
int ind = 0, so = inf;
int main() {
    int n, c, i;
    cin >> n >> c;
    for(i = 0; i<n; i++){
        cin >> p[i];
        suma += p[i];
        if(suma - (c * (i+1)) < so){
            ind=i;
            so = suma-(c*(i+1));
            if (so<0){
                cout << i << "\n";
                return 0;
            }
       }
    }
    so = p[0]- c;
    if( so <= 0){
        cout << i << "\n";
    }else{
        for(i = 1; i < n ; i++){
            cout << so << endl;
            if(so-c<=0 && i < n-1){
                cout << i-1 << "\n";
                return 0;
            }else{
                so += p[i] - c;
            }
        }

    }

    cout << "impossible" << "\n";


    return 0;


}
