#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<vector<bool>> card(4,vector<bool>(13, false));

    for(int i=0;i<n;i++){
        char C;
        int X;
        cin>>C>>X;

        if(C=='S'){
            card[0][X-1]=true;
        }
        if(C=='H'){
            card[1][X-1] =true;
        }
        if(C=='C'){
            card[2][X-1] =true;
        }
        if(C=='D'){
            card[3][X-1] =true;
        }
    }
    for(int i=0;i<13;i++){
        if(!card[0][i]){
            cout<<'S'<<" "<<i+1<<endl;
        }
    }
    for(int i=0;i<13;i++){
        if(!card[1][i]){
            cout<<'H'<<" "<<i+1<<endl;
        }
    }
    for(int i=0;i<13;i++){
        if(!card[2][i]){
            cout<<'C'<<" "<<i+1<<endl;
        }
    }
    for(int i=0;i<13;i++){
        if(!card[3][i]){
            cout << 'D' << " " << i + 1 << endl;
        }
    }
    return 0;
}