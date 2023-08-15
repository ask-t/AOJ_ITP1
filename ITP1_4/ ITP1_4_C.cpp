#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    char op;
    while(true){
        cin >> a >> op >> b;
        if (op == '?')
        {
            break;
        }
        if(op =='+'){
            c =a+b;
        }
        else if (op == '-')
        {
            c=a-b;
        }
        else if (op == '*')
        {
            c=a*b;
        }
        else if (op == '/')
        {
            c=a/b;
        }
        cout<<c<<endl;
    }
    return 0;
}