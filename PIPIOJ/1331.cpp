#include <cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
typedef struct {
    char name[11];
    int score[5];
    int average;
}Re;
Re res[200001],temp;
int n,m[5]={0},num,cur,pos,score[5];
char name[11];
int cmp(Re a,Re b)
{
    return strcmp(a.name, b.name)<0;
}
void sw(int p,int q){
    temp=res[p];
    res[p]=res[q];
    res[q]=temp;
}
void xxx(int index){
    pos=index<<1;
    if (pos>num) return;
    else if(pos<num&&res[pos+1].average>res[pos].average) pos++;
    if(res[pos].average>res[index].average){
        sw(pos,index);
        xxx(pos);
    }
}
void heapSort(){
    int tail;
    //build max heap
    for(int i=n/2;i>0;i--) xxx(i);
    cur=res[1].average;
    tail=num;
    for(int i=1;i<n;i++) {
        sw(1,num--);
        //rebuild
        xxx(1);
        if(res[1].average!=res[num+1].average){
            sort(res+num+1, res+tail+1, cmp);
            for(int j=num+1;j<tail+1;j++){
                printf("%s %d.%05d\n",res[j].name, res[j].average/100000,res[j].average%100000);
            }
            tail=num;
        }
    }
    if(tail==1){
        printf("%s %d.%05d\n", res[1].name, res[1].average/100000,res[1].average%100000);
    }else{
        sort(res+1, res+tail+1, cmp);
        for(int j=1;j<tail+1;j++){
            printf("%s %d.%05d\n",res[j].name, res[j].average/100000,res[j].average%100000);
        }
    }
}
int main(){
    while(~scanf("%d",&n)){
        num=n;
        for(int i=1;i<=n;i++){
            scanf("%s%d%d%d%d%d",&res[i].name,&res[i].score[0],
                  &res[i].score[1],&res[i].score[2],
                  &res[i].score[3],&res[i].score[4]);

            for(int j=0;j<5;j++){
                if(res[i].score[j]>m[j]) {
                    m[j]=res[i].score[j];
                }
            }
        }
        for(int i=1;i<=n;i++){
            res[i].average=(int)((res[i].score[0]*600.0/m[0]*0.25+
            (res[i].score[1]*300.0/m[1]+res[i].score[2]*300.0/m[2])*0.25+
            (res[i].score[3]*300.0/m[3]+res[i].score[4]*300.0/m[4])*0.5)*100000+0.5);
        }
        heapSort();
    }
    return 0;
}
