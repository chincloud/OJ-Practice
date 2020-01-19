#include <stdio.h>
int main(){

    int a[50001],m,n,flag,num,remain;
    while(~scanf("%d%d",&m,&n)){
        flag=num=0;
        for(int i=0;i<=n;i++){
            scanf("%d",&a[i]);
            if(a[i]>m) flag=1;
        }
        if(flag) printf("NoSolution\n");
        else {
            remain=m-a[0];
            for(int i=0;i<n;i++){
                if(a[i+1]>remain){
                    num++;
                    remain=m;
                }
                remain-=a[i+1];
            }
            printf("%d\n",num);
        }
    }
    return 0;
}
