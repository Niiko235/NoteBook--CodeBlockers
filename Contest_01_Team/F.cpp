#include <bits/stdc++.h>

using namespace std;





int main(){
   int  h, w, n;
   cin>>h>>w>>n;
   char mt[h][w];

    string s; cin>>s;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin>>mt[i][j];
        }
    }

    int ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            int x = i, y = j;
            bool f = true;
            if(mt[x][y] == '.'){

            for(char c : s){
                if(c == 'U') x--;
                if(c == 'D') x++;
                if(c == 'L') y--;
                if(c == 'R') y++;
                if(x < 0 || x >= h || y < 0 || y >= w || mt[x][y] != '.'){
                    f = false;
                    break;
                }
            }

            if(f){
                cout  << i<< " " << j << " " << x << " " << y << " " << f << endl;
                ans++;
            }
        }

    }
    }
    cout<<ans<<endl;

    return 0;
}
