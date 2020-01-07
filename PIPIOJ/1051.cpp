#include <stdio.h>
int a[303];

//¸çµÂ°ÍºÕ²ÂÏë¢ñ
int isSuShu(int i){
    for(int j=i-1;j>1;j--){
        if(i%j == 0){
            return 0;
        }
    }
    return 1;
}
int main(){

    int n=0,boundary,k=0,x;
    for(int i=2;i<2001;i++){
        if(isSuShu(i)){
            a[n++] = i;
        }
    }
    while(~scanf("%d", &x)){
        if(k++!=0){
            printf("\n");
        }
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
