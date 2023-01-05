//[C_MM14-易] 計算時間的組合
//寫一程式要求使用者輸入代表秒數的整數值，並且經計算以天數、小時數、分鐘數、與秒數的組合來顯示對等的時間值
//請使用符號常數表示一天內的小時數；一小時內的分鐘數，以及一分鐘內的秒數。
//Input：輸入秒數。
//Output：輸出天數，時數，分數，秒數。
#include<stdio.h>
int main(){
    int time;
    int day = 0, hour = 0, min = 0, sec = 0;
    scanf("%d", &time);
    day = time / 86400;
    hour = (time%86400) / 3600;
    min = (time%3600) / 60;
    sec = time % 60;
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n", day, hour, min, sec);
    return 0;
}