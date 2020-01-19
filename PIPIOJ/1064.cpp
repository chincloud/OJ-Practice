#include <algorithm>
#include <cstdio>
using namespace std;

char k,s;
short j,len=5;
int palindromePrime[5953]={2,3,5,7,11};
int num,powTen[5]={1,1e1,1e2,1e3,1e4};
char isPrime(int n,char index){
    for(int i=2;i<32*powTen[index-1];i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
void genPalindromePrime(char l){
    k=1;
    while(k<10){
        for(int i=0;i<powTen[l>>1];i++) {
            num=0;
            j=i/10;
            s=l>>1;
            while(j){
                num+=(j%10)*powTen[--s];
                j/=10;
            }
            num+=(k*powTen[l>>1]+i)*powTen[l>>1]+k;
            if(isPrime(num, l>>1)) palindromePrime[len++]=num;
        }
        k+=2;
    }
}
int main(){
    genPalindromePrime(3);
    genPalindromePrime(5);
    genPalindromePrime(7);
    genPalindromePrime(9);
    int a,b;
    short pos,t;
    while(~scanf("%d%d", &a, &b)){
        pos=lower_bound(palindromePrime,palindromePrime+len,a)-palindromePrime;
        t=0;
        while(palindromePrime[pos++]<=b) t++;
        printf("%d\n",t);
    }
    return 0;
}
