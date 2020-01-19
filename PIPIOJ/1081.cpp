#include <bits/stdc++.h>
#define MAX_SIZE 1000000
using namespace std;

int n,a[MAX_SIZE],b[MAX_SIZE];
int main(){
    int len,pos;
    while(~scanf("%d", &n)){
        if(n==0) continue;
        len=0;
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
            if(i==0) b[len]=a[i];
            if(a[i]>b[len]){
                b[++len]=a[i];
            }else if(a[i]<b[len]){
                pos=lower_bound(b,b+len,a[i])-b;
                b[pos]=a[i];
            }
        }
        printf("%d\n",len+1);
    }
    return 0;
}
