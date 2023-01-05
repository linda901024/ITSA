//題目10. 輾轉相除法
//給定二個正整數，利用輾轉相除法求其最大公因數。
//Input：給定二個正整數
//Output：輸出最大公因數
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