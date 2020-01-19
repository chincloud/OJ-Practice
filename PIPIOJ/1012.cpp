#include <stdio.h>
#include <string.h>
#define MAX_I 2147483647
int main(){
    short a[10],i,k;
    char str[1001];

    while(~scanf("%s", str)) {
        i=k=0;
        memset(a,0,sizeof(short)*10);
        while(str[i]!='\0') a[str[i++]-48]++;
        for(i=1;i<10;i++) if(a[i]>a[k]) k=i;
        printf("%d\n", k);
    }
    return 0;
}
