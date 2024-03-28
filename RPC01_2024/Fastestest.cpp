#include <bits/stdc++.h>

using namespace std;

int main (){
    double x,y,x2,y2;
    cin >> x >> y;
    x2 = 100-x;
    y2 = 100-y;
    double res = (x/x2)/(y/y2);
    cout << setprecision(12) << res << endl;


    return 0;

}
