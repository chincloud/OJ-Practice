#include <stdio.h>
typedef struct {
    char str[10002];
    short len;
}BigNum;
BigNum arr[201],temp;
int n,num,pos;
int cmp(BigNum a, BigNum b){
    if(a.len!=b.len) return a.len<b.len;
    for(int i=0;i<a.len;i++){
        if(a.str[i]!=b.str[i])
            return a.str[i]<b.str[i];
    }
    return 0;
}
void sw(int p,int q){
    temp=arr[p];
    arr[p]=arr[q];
    arr[q]=temp;
}
void xxx(int index){
    pos=index<<1;
    if (pos>num) return;
    else if(pos<num&&cmp(arr[pos],arr[pos+1])) pos++;
    if(cmp(arr[index],arr[pos])){
        sw(pos,index);
        xxx(pos);
    }
}
void heapSort(){
    //build max heap
    for(int i=n/2;i>0;i--) xxx(i);
    for(int i=1;i<n;i++) {
        sw(1,num--);
        //rebuild
        xxx(1);
    }
}
int main(){
    while(~scanf("%d",&n)){
        num=n;
        for(int i=1;i<=n;i++){
            scanf("%s", &arr[i].str);
            arr[i].len=0;
            while(arr[i].str[arr[i].len]!='\0') arr[i].len++;
        }
        heapSort();
        for(int i=1;i<=n;i++){
            printf("%s\n", arr[i].str);
        }
    }
    return 0;
}

