#include <stdio.h>
typedef struct{
    double z;
    int h;
}Elem;
int main(){
    int n,i,j,amount;
    Elem a[101],temp;
    a[0].z=0;
    double res;
    while(~scanf("%d%d",&n,&amount)){
        res=0;
        for(i=1;i<=n;i++){
            scanf("%lf%d",&temp.z,&temp.h);
            j=i;
            while(a[j-1].z>temp.z) {
                a[j]=a[j-1];
                j--;
            }
            a[j]=temp;
        }
        for(i=1;i<=n;i++){
            res+=amount<a[i].h?amount*a[i].z:a[i].h*a[i].z;
            amount-=a[i].h;
            if(amount<0) {amount=0;break;}
        }
        res+=amount;
        printf("%d\n", (int)res);
    }
    return 0;
}
