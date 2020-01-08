#include <stdio.h>
#include <math.h>
#include <string.h>
int b[31251];
int x=1000000;
int a[80000];

int main(){

    int k=0,n=0,boundary;
    memset(b, -1, sizeof(int)*31251);
    for(int i=2;i<=x;i++) for(int j=i<<1;j<=x;j+=i) b[j>>5] &= ~(1 << ~-(j&31));
    for(int i=2;i<=x;i++) if(b[i>>5]>>~-(i&31)&1) a[n++]=i;
    while(~scanf("%d", &x)){
        if(k++!=0) printf("\n");
        boundary = n-1;
        for(int i=0;i<n;i++){
            if(i>boundary){
                break;
            }
            while(!(boundary<i)){
                if(a[i]+a[boundary]==x){
					printf("%d %d\n", a[i], a[boundary]);
                    boundary--;
                }else if(a[i]+a[boundary]<x){
                    break;
                }else{
                    boundary--;
                }
            }
        }
    }
}
