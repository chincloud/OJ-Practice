#include <stdio.h>
int main(){

    short a[12]={0,31,59,90,120,151,181,212,243,273,304,334},n;
    int year,month,date;
    while(~scanf("%d/%d/%d",&year,&month,&date)){
        n=a[month-1]+date;
        if(month>2&&(year%4==0&&year%100!=0 || year%400==0)) n++;
        printf("%d\n",n);
    }
    return 0;
}
