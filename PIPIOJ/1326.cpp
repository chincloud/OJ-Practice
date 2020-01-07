#include <stdio.h>

//PIPI´òÂé½« 
int calc(int x){
	if(x == 5) return 8000; 
	else if(x < 8) return 12000;
	else if(x < 11) return 16000;
	else if(x < 13) return 24000;
	return 32000;
}

int main(){
	
	int x,k,n=7,a[4];
	char c,p[4] = {'E', 'S', 'W', 'N'};
	
	c = getchar();
	for(int i=0;i < 4;i++)
		if(c == p[i]) k = i;
		
	scanf("%d%d%d%d", &a[0], &a[1], &a[2], &a[3]);
	
	while(n--){
		scanf("%d", &x);
		x = calc(x);
		k = (k+3)%4;
		a[0] += x;
		
		for(int i=1;i<4;i++)
			a[i] -= x/(k == 0 ? 2 : 4);
			
		if(k==0) a[0] += x*0.5; 
		else a[4-k] -= x/4;
	}
	printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
	
	return 0;
}
