#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a;
    cin>>n;
    vector<int> b;
    for(int i=0;i<n;i++){
        cin>>a;
        b.push_back(a);
    }
    for(int i=n-1;i>-1;i--){
        if(i==0){
            cout<<b[i]<<endl;
            break;
        }
        cout<<b[i]<<" ";
    }
    return 0;
}