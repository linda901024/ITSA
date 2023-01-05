//題目36. 平、閏年判定
//試撰寫一個程式，可由鍵盤讀入一個 4 位數的整數，代表西洋的年份，然後判別這個年份是否為閏年（每四年一閏，每百年不閏，每四百年一閏)
//例如西元 1900 雖為 4 的倍數，但可被 100 整除，所以不是閏年
//同理， 2000 年是閏年，因可被 400 整數，而 2004 當然也是閏年，因可以被 4 整除。
//Input：輸入西元年份。
//Output：輸出閏年(Bissextile Year)或平年(Common YearCommon Year)。
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
bool LeapYear(int y);
int main(void){
    int year;
    while(scanf("%d", &year)!=EOF){
        if(year > 0){
            if(LeapYear(year))
                printf("Bissextile Year\n");
            else
                printf("Common Year\n");
        }
        
    }
    return 0;
}

bool LeapYear(int y){
    return ((y % 400 == 0) || ((y % 4 == 0) && !(y % 100 == 0)));
}