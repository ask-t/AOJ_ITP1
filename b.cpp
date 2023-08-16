#include <bits/stdc++.h>//ヘッダインクルード
using namespace std;//名前空間の宣言


int main() {
    
    int n; //nの型を整数で指定
    cin>>n; //整数を受け取る

    vector<vector<bool>> card(4,vector<bool>(13,false)); //4*13の大きさのbool型の配列を用意し,falseで初期化

    for(int i=0;i<n;i++){ //0からn-1まで繰り返し
        char C; //Cの型を文字で指定
        int X; //Xの型を整数で指定
        cin>>C>>X; //絵柄とランクを受け取る

        if(C=='S'){ //絵柄Cが'S'の場合
            card[0][X-1]=true; //card配列の0番目のX-1番目をtrueに変更
        }
        if(C=='H'){ //絵柄Cが'H'の場合           
            card[1][X-1]=true; //card配列の1番目のX-1番目をtrueに変更
        }
        if(C=='C'){ //絵柄Cが'C'の場合
            card[2][X-1]=true; //card配列の2番目のX-1番目をtrueに変更
        }
        if(C=='D'){ //絵柄Cが'D'の場合
            card[3][X-1]=true; //card配列の3番目のX-1番目をtrueに変更
        }
    }
    for(int X=0;X<13;X++){ //0から12まで繰り返し
        if(!card[0][X]){ //card配列の0番目のX番目がfalseの場合
            cout<<'S'<<" "<<X+1<<endl; //絵柄'S'とランクを出力
        }
    }
    for(int X=0;X<13;X++){ //0から12まで繰り返し
        if(!card[1][X]){ //card配列の1番目のX番目がfalseの場合
            cout<<'H'<<" "<<X+1<<endl; //絵柄'H'とランクを出力
        }
    }
    for(int X=0;X<13;X++){ //0から12まで繰り返し
        if(!card[2][X]){ //card配列の2番目のX番目がfalseの場合
            cout<<'C'<<" "<<X+1<<endl; //絵柄'C'とランクを出力
        }
    }
    for(int X=0;X<13;X++){ //0から12まで繰り返し
        if(!card[3][X]){ //card配列の3番目のX番目がfalseの場合
            cout<<'D'<<" "<<X+1<<endl; //絵柄'D'とランクを出力
        }
    }

}

