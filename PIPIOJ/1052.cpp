#include <stdio.h>
#include <math.h>
int a[3125]={0};
int isSuShu(int i){
    for(int j=2;j<(int)(sqrt(i)+1);j++){
        if(i%j == 0){
            return 0;
        }
    }
    return 1;
}
int main(){

    int k=0,x=100000,bit,m=0;
    a[0] |= (1<<2);
    for(int i=3;i<x;i++){
        if(isSuShu(i)) {
            bit = i&31; if(bit == 0) bit=32;
            a[i>>5] |= (1 << bit);
        }
    }

    while(~scanf("%d", &x)){
        if(k++!=0) printf("\n");
        bit = (x-2)&31;
        if(bit == 0) bit=32;
        if((a[(x-2)>>5] >> bit)&1) printf("2 %d\n", x-2);
        for(int i=3;i<50001;i+=2){
            m=x-i;
            if(i>m) break;
            bit = i&31; if(bit == 0) bit=32;
            if((a[i>>5] >> bit)&1) {
                bit = (m)&31; if(bit == 0) bit=32;
                if((a[(m)>>5] >> bit)&1) printf("%d %d\n",i,m);
            }
        }
    }
}
