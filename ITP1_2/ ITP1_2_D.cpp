#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,W,H,r;
    cin >>W>>H>>x>>y>>r;
    if ((x + r) <= W && (y + r) <= H && (x - r) >= 0 && (y - r) >= 0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}