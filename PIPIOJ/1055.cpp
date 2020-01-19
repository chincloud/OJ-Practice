#include <cstdio>
#include <iostream>
long long int a[50][50]={0};
using namespace std;
int main(){
    int n;
    a[0][0]=a[1][0]=a[1][1]=1;
    while(~scanf("%d",&n)){
        for(int i=0;i<n;i++){
            if(a[i][0]!=1){
                a[i][0]=1;
                a[i][i]=1;
                for(int j=1;j<i;j++) a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
            cout<<a[i][0];
            for(int j=1;j<=i;j++) cout<<' '<<a[i][j];
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
