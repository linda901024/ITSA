//[C_MM19-易] 電話費計算
//試寫一個程式，有一家電信公司的計費方式：每個月打800分鐘以下(含第800分鐘)，每分鐘0.9元
//撥打時間介於800分鐘～1500分鐘時，所有電話費以9折計算；若是打1500分鐘以上(含第1500分鐘)，則通話費將以79折計算，並於顯示其通話費用。
//Input：輸入通話分鐘數(int)。
//Output：輸出通話費(double)，取到小數點以下第一位。
#include <stdio.h>
int main(){
    int hour;
    double total = 0;
    scanf("%d", &hour);
    if(hour <= 800){
        total = hour * 0.9;
    }
    else if(hour > 800 && hour < 1500){ //2小時內，每半小時$30
        total = hour * 0.9 * 0.9;
    }
    else if(hour >= 1500){
        total = hour * 0.9 * 0.79;
    }
    printf("%.1lf\n", total);
    return 0;
}