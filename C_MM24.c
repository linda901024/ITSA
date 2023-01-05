//[C_MM24-易] 計算薪水
//試寫一個程式，讓使用者可輸入整月的工時數及每月的固定時薪，並將其所應獲得的工資顯示在螢幕上。工資計算方法如下：
//Input：每一次執行輸入兩個整數，依序分別為工時、時薪。
//Output：輸出薪水(double)，取至小數點以下第一位。
#include <stdio.h>
int main(){
    int hour, price;
    double total = 0;
    scanf("%d %d", &hour, &price);
    //60 小時 ( 含 ) 以下的薪水部份，以固定時薪計算。
    if(hour <= 60){
        total = hour * price;
    }
    //61 ～ 120 小時之間的薪水部份，以固定時薪的 1.33 倍計算。
    else if(hour > 60 && hour <= 120){
        total = (hour - 60) * price * 1.33 + 60 * price;
    }
    //第 121 小時以上的薪水部份，以固定時薪的 1.66 倍計算。
    else if(hour > 120){
        total = (hour - 120) * price * 1.66 + 60 * price + 60 * price * 1.33;
    }
    printf("%.1lf\n", total);
    return 0;
}