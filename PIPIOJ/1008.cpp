#include <stdio.h>
int main(){

    int sum,i,n,s,e,c_s,c_e,c_sum,x,flag;
    while(~scanf("%d", &n)){
        sum=s=e=c_sum=c_s=c_e=0;
        flag=1;
        for(i=0;i<n;i++){
            scanf("%d",&x);
            if(c_sum+x<0){
                c_sum=0;
                flag=1;
            }else{
                if(flag) {c_s=i; flag=0;}
                c_e=i;
                c_sum+=x;
                if(c_sum>sum){
                    sum=c_sum;
                    s=c_s;
                    e=c_e;
                }
            }
        }
        printf("%d %d %d\n",sum,s,e);
    }
    return 0;
}
