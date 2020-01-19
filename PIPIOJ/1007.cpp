#include <stdio.h>
int main(){

    int i;
    char s[6]="START",e[4]="END",f[11]="ENDOFINPUT";
    char x[201],str[201];
    while(1){
        scanf("%s", x);
        i=0;
        while(x[i]!='\0'){
            if(x[i]!=f[i]){
                break;
            }
            return 0;
        }
        while(1){
            fflush(stdin);
            gets(x);
            if(x[0]!='\0') break;
        }
        while(x[i]!='\0'){
            if(x[i]-'A'<0||x[i]-'A'>25) str[i]=x[i];
            else str[i]=(x[i]-'A'+21)%26+'A';
            i++;
        }
        str[i]='\0';
        scanf("%s",x);
        printf("%s\n",str);
    }
    return 0;
}
