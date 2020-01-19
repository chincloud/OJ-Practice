#include <stdio.h>
int main(){
    int score;
    while(~scanf("%d", &score)){
        if(score<0) printf("Score is error!\n");
        else if(score<72) printf("E\n");
        else if(score<80) printf("D\n");
        else if(score<100) printf("C\n");
        else if(score<108) printf("B\n");
        else if(score<121) printf("A\n");
        else printf("Score is error!\n");
    }
    return 0;
}
