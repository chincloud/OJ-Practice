#include <stdio.h>
#define INF 2147483647

int n,a[300],dp[300][300],x;
void calcMin(int start_i,int end_i){
    for(int i=start_i;i<end_i;i++){
        if(dp[start_i][i]==INF) calcMin(start_i,i);
        if(dp[i+1][end_i]==INF) calcMin(i+1,end_i);
        x=dp[i][start_i]+dp[end_i][i+1];
        if(start_i<i) x+=dp[start_i][i];
        if(i+1<end_i) x+=dp[i+1][end_i];
        if(x<dp[start_i][end_i]){
            dp[start_i][end_i]=x;
            dp[end_i][start_i]=dp[i][start_i]+dp[end_i][i+1];
        }
    }
}
int main(){
    while(~scanf("%d",&n)){
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
            for(int j=0;j<n;j++) dp[i][j]=INF;
            dp[i][i]=a[i];
        }
        calcMin(0,n-1);
        printf("%d\n", dp[0][n-1]);
    }
    return 0;
}
