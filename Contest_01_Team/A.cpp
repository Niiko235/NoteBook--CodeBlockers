#include <bits/stdc++.h>

#define hg 1e3

using namespace std;


int main(){
    int n; cin>>n;

    vector<int> array(n);
    vector<int> array2;

    for(int i = 0; i < n; i++){
        cin>>array[i];
    }

    sort(array.begin(), array.end());

    int ax = 0;
    for(int i = 0; i < n; i++){

        if(array[i] == array[i+1]-1){
            if(ax == 0){
                ax = i;
            }
        }else{
            cout<<ax<<" "<<i<<endl;
            if(ax != 0){
                array2.push_back(array[ax]);
            }else{
                array2.push_back(array[i]);
            }
                ax = 0;

        }

    }
    int ac = 0;
    for(int i = 0; i < array2.size(); i++){
        ac += array2[i];
        cout<<array2[i]<<" ";
    }

    cout<<ac<<endl;

    return 0;
}
