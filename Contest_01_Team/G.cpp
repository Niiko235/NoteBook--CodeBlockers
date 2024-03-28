#include<bits/stdc++.h>
using namespace std;


int main (){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int a, b, c, q;
    cin>>a;
    vector<int> A(a);
    for(int i = 0; i < a; i++){
        cin>>A[i];
    }

    cin>>b;
    vector<int> B(b);
    for(int i = 0; i < b; i++){
        cin>>B[i];
    }

    cin>>c;
    vector<int> C(c);
    for(int i = 0; i < c; i++){
        cin>>C[i];
    }

    set<int> res;


    for(int i = 0; i < a; i++){
       for(int j = 0; j < b; j++){
            for(int k = 0; k < c; k++){
                res.insert(A[i]+B[j]+C[k]);

            }
        }
    }
    int x;
    cin>>q;
    for(int i = 0; i < q; i++){
            cin>>x;
        if(res.count(x)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

}
