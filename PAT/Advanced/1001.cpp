#include <iostream>
#include <stack>
using namespace std;
int main() {
    
    int a,b,sum;
    if(scanf("%d", &a)){};
    if(scanf("%d", &b)){};
    stack<int> s;
    sum = a + b;
    
    while(sum != 0) {
    	s.push(sum % 1000);
    	sum /= 1000;
	}

    if(!s.empty()) {
        printf("%d", s.top());
        s.pop();
    } else {
        printf("0");
    }
	
	while(!s.empty()) {

        printf(",");
        printf("%03d", s.top() < 0 ? -s.top() : s.top());
        s.pop();	
	}
	
    return 0;
}
