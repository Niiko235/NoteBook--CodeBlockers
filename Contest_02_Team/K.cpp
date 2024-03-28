#include <bits/stdc++.h>

using namespace std;

//vector<int> dp

int main (){

    int n, m;
    while( cin >> n >> m){
    int ma = 0;
    for(int j = n; j <= m; j++){
        int i = j;
     //   cout << "Incia" << i << endl;
        int cont = 0;
        while(i!= 1){
      //      cout << i << endl;
            if(i%2==0)i=i/2;
            else if (i%2!=0) i = (i*3)+1;
            cont++;
        }
        if(cont+1 >ma)ma=cont+1;
    }
    cout <<n << " " <<m <<" " << ma<< endl;
    }
}
