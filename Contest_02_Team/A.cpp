#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    string s; cin>>s;
    set<string> se;
    int cont = 1;
    for(int i = 0; i < s.size(); i++){
        for(int j = i+1; j < s.size(); j++){
            if(s[i] != s[j]){
                char ax = s[j];
                s[j] = s[i];
                s[i] = ax;
                //cout << cont << " " << s << endl;
                se.insert(s);
                ax = s[j];
                s[j] = s[i];
                s[i] = ax;

            }

        }
    }


    cout<<se.size()<<endl;
	return 0;
}
