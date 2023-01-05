//題目14. 判斷是否為迴文
//請撰寫一個程式，判斷它是否迴文。
//Input：輸入一個正整數。
//Output：迴文印出 ” 是 ” ；非回文印出 ” 否 ” 。
#include<stdio.h>
#include<string.h>
int main(){
    char str[10000];
    int i, length;
    while(scanf("%s", str)!=EOF){
        length = strlen(str);
        for(i = 0; i < length/2; i ++){
            if(str[i] != str[length-1-i]){
                printf("NO\n");
                break;
            }
        }
        if(i >= length/2) printf("YES\n");
    }
    return 0;
}