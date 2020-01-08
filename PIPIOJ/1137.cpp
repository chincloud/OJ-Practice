#include <stdio.h>
#include <math.h>
void test(int t){
    int j,k;
    if(t==1) {printf("Impossible\n");return;}
    for(int i=2;i<(int)(sqrt(t)+1);i++){
        j=i;
        k=t;
        while(k){
            if(k==1) {printf("%d %d\n",j-1,i-1); return;}
            else if(k%j!=0) break;
            k/=j++;
        }
    }
    printf("%d %d\n", t, t-1);
    return;
}
int main(){

    int t;
    while(~scanf("%d", &t)) test(t);
    return 0;
}
