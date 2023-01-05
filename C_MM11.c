//[C_MM11-易] 購票計算
//假設火車站的自動售票機只能接受10元、5元、以及1元的硬幣
//請撰寫一個程式，算出乘客所購買票價N元車票時，所需投入各種幣值硬幣最少的數量？
//Input：輸入票價。
//Output：輸出各幣值硬幣最少的數量。
#include<stdio.h>
int main(){
    int price;
    int ten_cnt = 0, five_cnt = 0, one_cnt = 0;
    scanf("%d", &price);
    //計算十元
    if(price >= 10){
        ten_cnt = price / 10;
        price = price % 10;
    }
    //計算五元
    if(price >= 5){
        five_cnt = price / 5;
        price = price % 5;
    }
    //計算一元
    one_cnt = price;
    printf("NT10=%d\nNT5=%d\nNT1=%d\n", ten_cnt, five_cnt, one_cnt);
    return 0;
}