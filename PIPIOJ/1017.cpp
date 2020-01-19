#include <stdio.h>
int main(){
    int n,gap,j,i;
    while(~scanf("%d%d",&n,&gap)){
        if(n<=gap) {
            printf("%d\n", n+1);
        }else{
            j=gap+1;
            printf("%d", j);
            for(i=1;i<n/gap;i++){
                printf(" %d",j+=gap<<1);
            }
            j=n%gap;
            if(j!=0){
                printf(" %d", (n-j<<1)+j+1);
            }
            printf("\n");
        }
    }
    return 0;
}
