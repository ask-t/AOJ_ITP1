#include <bits/stdc++.h>
using namespace std;

int main(){
    double r;
    cin >>r;
    double pi = 3.141592653589;
    double area = r*r*pi;
    double cir = r*2*pi;
    cout <<fixed<<setprecision(5);
    cout <<area<<" "<<cir<<endl;
    return 0;
}