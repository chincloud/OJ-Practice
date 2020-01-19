#include <cstdio>
#include <algorithm>
int main(){

    int a[4]={153,370,371,407},m,n;
    char i,k;
    while(~scanf("%d%d",&m,&n)){
        k=0;
        for(i=0;i<4;i++) if(a[i]>=m) break;
        if(a[i]>n) printf("no");
        else printf("%d",a[i++]);
        while(a[i]<=n&&i<4) printf(" %d",a[i++]);
        printf("\n");
    }
    return 0;
}
