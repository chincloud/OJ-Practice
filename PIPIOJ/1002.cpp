#include <stdio.h>

int main(){
    char flag,s[128]={0},str[51];
    int j;
    for(int i=0;i<26;i++) {
        s[i+65]=1;
        s[i+97]=2;
    }
    s[48]=s[49]=s[50]=s[51]=s[52]=s[53]=s[54]=s[55]=s[56]=s[57]=3;
    s[33]=s[35]=s[36]=s[37]=s[64]=s[94]=s[126]=4;

    while(~scanf("%s", str)){
        flag=0;
        j=0;
        while(str[j]!='\0') flag|=(1<<s[str[j++]]);
        flag>>=1;
        if(flag==7||flag==11||flag==13||flag==14||flag==15) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
