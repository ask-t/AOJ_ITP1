#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        int x=i;
        if(x%3==0){
            cout<<" "<<i;
            continue;
        }
        while(x){
            if (x % 10 == 3)
            {
                cout << " " << i;
                break;
            }
            x /= 10;
        }
    }
    cout<<endl;
}