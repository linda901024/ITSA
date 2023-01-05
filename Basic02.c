//題目2. 英哩轉公里
//試撰寫一程式，可由鍵盤輸入英哩，程式的輸出為公里，其轉換公式如下：
//1 英哩= 1.6 公里
//Input：輸入欲轉換之英哩數(int)。
//Output：輸出公里(double)，取到小數點以下第一位。
#include<stdio.h>
int main(){
    int km;
    double mi;
    while(scanf("%d", &km)!=EOF){
        mi = km * 1.6;
        printf("%.1f\n", mi);
    }
    return 0;
}