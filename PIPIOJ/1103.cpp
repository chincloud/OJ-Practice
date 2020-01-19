#include <bits/stdc++.h>
#define ll long long int
using namespace std;
char n[10002];
int len;
int main(){
    ll t,ans;
    while(~scanf("%s", &n)){
        cin >> t;
        len=ans=0;
        while(n[len]!='\0') ans=(ans*10+n[len++]-48)%t;
        cout<<ans<<endl;
    }
    return 0;
}
