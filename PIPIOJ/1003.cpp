#include <stdio.h>
int main(){

    int x,n,num,t;
    char amount[6]={100,50,10,5,2,1};
    while(~scanf("%d",&n)){
        num=0;
        while(n--){
            scanf("%d",&x);
            t=0;
            while(t<6&&x!=0){
                num+=x/amount[t];
                x%=amount[t];
                t++;
            }
        }
        printf("%d\n", num);
    }
    return 0;
}
