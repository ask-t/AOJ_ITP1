#include <iostream>
using namespace std;

int main(){
    int S = 46979;
    int s,m,h;
    s = S%60;
    S/=60;
    m =S%60;
    S/=60;
    h = S%60;
    cout <<h<<":"<<m<<":"<<s<< endl;
    return 0;
}