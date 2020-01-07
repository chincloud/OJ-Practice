#include <iostream>
using namespace std;

//回文串问题
char str[100];
int len;

bool isHuiWen(){
	for(int j=0;j<len/2;j++){
		if(str[j] != str[len-j-1]){
			return false;
		}
	}	
	return true;
}  

int main(){
	
	int i=0;
	while(scanf("%s",str)){
		len=0;
		for(int j=0;j<100;j++) {
			if(str[j] == '\0') {
				break;
			}
			len++;
		}
		printf("case%d: %s\n", ++i, isHuiWen()?"yes":"no");
	} 
	return 0;
} 
