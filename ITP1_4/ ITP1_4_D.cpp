#include <bits/stdc++.h>
using namespace std;

int main(){
    int max = -1000000;
    int min = 1000000;
    int sum =0;
    int num,a;
    cin >>num;
    for(int i=0;i<num;i++){
        cin>>a;
        if(a>max){
            max=a;
        }
        if(a<min){
            min=a;
        }
        sum+=a;
    }
    cout <<min<<" "<<max<<" "<<sum<<endl;
    return 0;
}