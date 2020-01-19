#include <stdio.h>
int m,n,arr[100],x;
int main(){

    while(~scanf("%d",&m)){
        for(int i=0;i<m;i++) scanf("%d",&arr[i]);
        scanf("%d",&n);
        int j=0;
        scanf("%d",&x);
        if(x<arr[j]){
            printf("%d", x);
        }else{
            printf("%d", arr[j++]);
            while(j<m&&arr[j]<=x) printf(" %d", arr[j++]);
            printf(" %d", x);
        }
        for(int i=1;i<n;i++){
            scanf("%d",&x);
            if(j<m) {
                if(x<arr[j]) printf(" %d", x);
                else {
                    while(j<m&&arr[j]<=x)
                        printf(" %d", arr[j++]);
                    printf(" %d", x);
                }
            }else{
                printf(" %d", x);
            }
        }
        while(j<m) printf(" %d", arr[j++]);
        printf("\n");
    }
	return 0;
}
