//[C_MM17-易] 求最大公因數
//輸入兩個數字，找出它們的最大公因數
//Input：輸入一組兩個整數。
//Output：輸出兩數字的最大公因數。
#include<stdio.h>
int main(){
    int X, Y;
    while(scanf("%d %d", &X, &Y)!=EOF){
        if(X <= 0 || Y <= 0) continue;
        if(X == 0 && Y == 0) break;
        while(X > 0 && Y > 0){
            if(X > Y)
                X = X % Y;
            else
                Y = Y % X;
        }
        if(X > Y)
            printf("%d\n", X);
        else
            printf("%d\n", Y);
    }
    return 0;
}