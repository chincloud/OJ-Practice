#include <iostream>
#include <cstdio>
using namespace std;
#define ll long long int
int main(){

    int m,n;
    ll a,b,j;
    while(~scanf("%d%d", &m,&n)){
        a=b=0;
        for(int i=m;i<=n;i++){
            j=i*i;
            if(i&1==1) {j*=i;b+=j;}
            else a+=j;
        }
        cout<<a<<' '<<b<<endl;
    }
    return 0;
}
