#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    while(1){
        cin >>a>>b;
        if (a==0&&b==0){
            break;
        }
        if(a>b){
            int c = a;
            a = b;
            b = c;
        }
        cout <<a<<" "<<b<<endl;
    }
}