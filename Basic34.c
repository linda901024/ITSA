//題目34. 標準體重計算
//已知男生標準體重＝(身高－80 )*0.7；女生標準體重＝(身高－70)*0.6；試寫一個程式可以計算男生女生的標準體重。
//Input：每個測資檔案會有多組測資案例。輸入兩個數值，依序代表為身高及性別（1代表男性；2代表女性）。
//Output：輸出標準體重，浮點數取至第一位。
#include <stdio.h>
int main(){
    int height, state;
    while(scanf("%d %d", &height, &state)!=EOF){
        if(state == 1)
            printf("%.1f\n", (height - 80) * 0.7);
        else if(state == 2)
            printf("%.1f\n", (height - 70) * 0.6);
    }
    return 0;
}