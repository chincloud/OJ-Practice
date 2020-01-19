#include <stdio.h>
int main(){
    char sub[5]="EASY",str[1000],index;
    short i;
    while(~scanf("%s",str)){
        index=i=0;
        while(str[i]!='\0'&&index<4){
            if(str[i]==sub[index]) index++;
            i++;
        }
        if(index==4) printf("easy\n");
        else printf("difficult\n");
    }
    return 0;
}
