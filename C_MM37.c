//[C_MM37-易] 判斷座標位於何處
//試撰寫一程式，輸入 x 、 y 座標值，判斷該點位於那一個象限或是在座標軸上。
//若輸入的座標值為 (0,0) ，則優先輸出為Origin(原點)
//若輸入的座標值為 (4,0)，則輸出即為x-axis(x 軸)；若輸入的座標值為 (3,-2) ，則輸出即為 4th Quadrant(第四象限)。
//Input：座標x和y，中間以空格隔開，型態為整數。
//Output：座標位置如1st Quadrant、2nd Quadrant、3rd Quadrant、4th Quadrant、Origin、x-axis或 y-axis。
#include<stdio.h>
int main(){
    int X, Y;
    scanf("%d %d", &X, &Y);
    if(X == 0 && Y != 0) printf("y-axis\n");
    else if(X != 0 && Y == 0) printf("x-axis\n");
    else if(X > 0 && Y > 0) printf("1st Quadrant\n");
    else if(X < 0 && Y > 0) printf("2nd Quadrant\n");
    else if(X < 0 && Y < 0) printf("3rd Quadrant\n");
    else if(X > 0 && Y < 0) printf("4th Quadrant\n");
    else printf("Origin\n");
    return 0;
}