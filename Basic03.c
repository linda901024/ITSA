//題目3. 判斷座標是否在圓形的範圍內
//有一圓形，直徑為200，且中心座標為(0,0)
//請寫一支程式可以輸入「點」的座標，並判斷「點」是否在圓形的範圍內。如果「點」的位置剛好在邊界的話也算是在圓形範圍內(例：x=100，y=0)。
//Input：輸入一整數座標，依序分別X與Y。
//Output：輸出此座標位置在圓內或圓外訊息。
#include <stdio.h>
#include <math.h>
int main(){
    int X, Y;
    float length;
    scanf("%d %d",  &X, &Y);
    length = X * X + Y * Y;
    if(length <= 10000)
        printf("inside\n");
    else
        printf("outside\n");
    return 0;
}