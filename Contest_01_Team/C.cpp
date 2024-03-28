#include <bits/stdc++.h>
#include <vector>
#include <set>
using namespace std;

int main (){
    long long anws = 0;
    int leds [] = {7,4,1};
    int cost [] = {3,4,2};

    freopen("auxiliary.in", "r", stdin);
    freopen("auxiliary.out", "w", stdout);

    int n; cin >> n;
    for(int i = 0; i < 3 && n != 0; i++){
        if(n>=cost[i]){
            if(n%cost[i]!=1){
                anws += (n/cost[i])*leds[i];
                n = n%cost[i];
            }else{
                anws += ((n/cost[i])-1)*leds[i];
                n = (n%cost[i])+cost[i];
            }
        }
    }


    cout << anws << endl;



}
