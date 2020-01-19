#include <stdio.h>
int main(){

    int n,a[1000],b[1000],m=1;
    while(~scanf("%d", &n)){
        m=1;
        if(n==0) continue;
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
            b[i]=1;
            for(int j=i-1;j>=0;j--){
                if(a[j]<a[i]){
                    if(b[i]<b[j]+1){
                        b[i]=b[j]+1;
                        if(b[i]>m){
                            m=b[i];
                        }
                    }
                }
            }
        }
        printf("%d\n",m);
    }
    return 0;
}
