#include <iostream>
using namespace std;

int main(){
    int x;
    int y;
    cin >> x;
    cin >> y;
    int area = x*y;
    int perimeter = x*2+y*2;
    cout << area << " "<< perimeter << endl;
    return 0;
}