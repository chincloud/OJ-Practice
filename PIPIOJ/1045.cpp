#include <stdio.h>

int main(){
    short a[100001]={0};
    int n,t,sum,m=0,k,x,flag;
    while(scanf("%d", &n)){
        if(n==0) break;
        scanf("%d", &t);
        for(int i=0;i<100001;i++) a[i]=0;
        sum=flag=0;
        for(int i=0;i<t;i++){
            scanf("%d", &x);
            if(!flag && x>n) {printf("1\n"); flag=1;}
            a[x]++;
            sum+=x;
            if(x>m) m=x;
        }
        if(flag) m=0;
        if(sum<n) printf("impossible\n");
        sum=0;
        k=0;
        while(m){
            while(a[m]){
                sum+=m;
                k++;
                if(!(sum<n)) {printf("%d\n", k); m=1; break;}
                a[m]--;
            }
            m--;
        }
    }
    return 0;
}
