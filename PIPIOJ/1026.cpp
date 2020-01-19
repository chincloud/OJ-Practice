#include <stdio.h>

char x[4];
char en2num(char* s){
    if(s[2] == 'v') if(s[0] == 'f') return 5; else return 7;
    else if(s[2] == 'e') return 1;
    else if(s[2] == 'o') return 2;
    else if(s[2] == 'r') if(s[0] == 't') return 3; else return 0;
    else if(s[2] == 'u') return 4;
    else if(s[2] == 'x') return 6;
    else if(s[2] == 'g') return 8;
    else if(s[2] == 'n') return 9;
}
char formatIn(char c){
    char i=0,k=10,num=0;
    while(scanf("%s", &x)){
        if(x[0]==c) break;
        num+=en2num(x)*k;
        i++;
        k/=10;
    }
    if(i==1) num/=10;
    return num;
}
int main(){

    int a,b;
    while(1) {
        a=formatIn('+');
        b=formatIn('=');
        if(a+b==0) return 0;
        printf("%d\n", a+b);
    }
    return 0;
}
