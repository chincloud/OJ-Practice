#include <iostream>
using namespace std;

int main(){
	int k,n,num=0;
	const int max=1001;
	float a, p[max]={0};
	if(scanf("%d",&k)){};
	for(int i=0;i<k;i++){
		if(scanf("%d%f",&n,&a)){};
		p[n]+=a;
	}
	if(scanf("%d",&k)){};
	for(int i=0;i<k;i++){
		if(scanf("%d%f",&n,&a)){};
		p[n]+=a;
	}
	
	for(int i=0;i<max;i++){
		if(p[i]!=0){
			num++;
		}
	}
	printf("%d",num);
	for(int i=max-1;i>=0;i--){
		if(p[i]!=0){
			printf(" %d %.1f",i,p[i]);
		}
	}
	return 0;
}

/*
typedef struct {	
	int exps;
	float coes;	
}Elem;

int calcSum(Elem* sum, int exps, float coes, int k) {
	if(exps < sum[k].exps)
		k++; 
	sum[k].exps = exps;
	sum[k].coes += coes;  
	return k;
}

int main() {

	int k1,k2,i,exps,cur=0,k=0;
	float coes;
	Elem a[10],sum[20] = {{0, 0}};
	 
	if(scanf("%d", &k1)){};
	for(i = 0;i < k1;i++) {
		if(scanf("%d%f", &exps,&coes)){};
		a[i].exps = exps; 	
		a[i].coes = coes; 	
		if(exps > sum[0].exps) 
			sum[0].exps = exps;
	}
	
	if(scanf("%d", &k2)){};
	for(i = 0;i < k2;i++) {
		if(scanf("%d%f", &exps,&coes)){};
		if(exps > sum[0].exps) 
			sum[0].exps = exps;
		if(cur < k1 && !(exps > a[cur].exps)) {
			while(cur < k1 && !(a[cur].exps < exps)) {
				k = calcSum(sum, a[cur].exps, a[cur].coes, k);
				cur++;			
			} 
		} 
		
		k = calcSum(sum, exps, coes, k);
	}
	
	while(cur < k1) {
		k = calcSum(sum, a[cur].exps, a[cur].coes, k);
		cur++;	
	}

	k=0;
	for(i = 0;i < 20;i++) {
		if(sum[i].coes != 0) {
			k++;
		}
	}
	printf("%d", k);
	for(i = 0;i < 20;i++) {
		if(sum[i].coes != 0) {
			printf(" %d", sum[i].exps);
			printf(" %.1f", sum[i].coes);			
		}
	}

	return 0;	
} 
*/
