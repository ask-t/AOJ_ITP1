#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >>x;
    cin >>y;

    if(x>y){
        cout << "a > b" << endl;
    }
    else if(x<y){
        cout << "a < b" << endl;
    }
    else{
        cout << "a == b" << endl;
    };
    return 0;
}