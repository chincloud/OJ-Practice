#include <stdio.h>
#include <string.h>
int pos,len;
char hex[100001],oct[133340],sub[12];
char format(char c){
    return c>57?c-55:c-48;
}
char hex2bin(int t){
    for(int i=0;i<3;i++){
        char n=format(hex[t]);
        int j=4;
        while(n){
            sub[pos--]=n&1;
            n>>=1;
            j--;
        }
        while(j--) sub[pos--]=0;
        t--;
    }
}
void bin2oct(){
    int k=11;
    for(int i=0;i<4;i++){
        oct[len++]=sub[k]+(sub[k-1]<<1)+(sub[k-2]<<2);
        k-=3;
    }
}
int main(){
    len=0;
    scanf("%s", hex);
    int n=strlen(hex);
    while(n>3){
        pos=11;
        hex2bin(n-1);
        bin2oct();
        n-=3;
    }

    int first,i=1;
    char foct[4];
    pos=0;
    first=format(hex[--n]);
    while(n--){
        first+=format(hex[n])<<(i++<<2);
    }
    if(first==0){
        printf("0\n");
        return 0;
    }
    while(first){
        foct[pos++]=first&7;
        first>>=3;
    }
    while(pos--){
        printf("%d",foct[pos]);
    }
    while(len--){
        printf("%d",oct[len]);
    }
    printf("\n");
    return 0;
}
