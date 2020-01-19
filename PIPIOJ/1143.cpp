#include <cstdio>
#include <algorithm>
using namespace std;

int n,a[100002],num,temp,pos,sum;
void sw(int p,int q){
    temp=a[p];
    a[p]=a[q];
    a[q]=temp;
}
void xxx(int index){
    pos=index<<1;
    if (pos>num) return;
    else if(pos<num&&a[pos+1]<a[pos]) pos++;
    if(a[pos]<a[index]){
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
        a[1]+=a[num+1];
        sum+=a[1];
        xxx(1);
    }
}
int main(){
    while(~scanf("%d",&n)){
        sum=0;
        num=n;
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        heapSort();
        printf("%d\n", sum);

    }
    return 0;
}
