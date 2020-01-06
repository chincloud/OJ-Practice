#include <iostream>
using namespace std;

#define INF 99999999
#define MAX_SIZE 501
typedef struct {
	int shortestPath;
	int shortestPathNum;
	int maxTeamAmount;
}Vertex;

int edge[MAX_SIZE][MAX_SIZE];
int vertex[MAX_SIZE];

Vertex dijkstra(int n,int start, int end) {
	int p[MAX_SIZE];
	int pre[MAX_SIZE];
	int min = INF;
	int k=start;
	Vertex v[MAX_SIZE];
	for(int i=0;i<n;i++){
		p[i] = 0;
		v[i].shortestPath = INF;
		v[i].maxTeamAmount = 0;
	}
	for(int i=0;i<n;i++){
		if(edge[start][i]!=0 && edge[start][i] < v[i].shortestPath) {
			v[i].shortestPath = edge[start][i];
			pre[i] = start;	
		}
	}
	p[start] = 1;
	v[start].shortestPath = 0;
	v[start].shortestPathNum = 1;
	v[start].maxTeamAmount = vertex[start];
	
	for(int l=1;l<n;l++){
		
		min = INF;
		for(int i=0;i<n;i++){
			if(v[i].shortestPath < min && p[i] == 0){
				min = v[i].shortestPath;
				k = i;
			}
		}
		p[k] = 1;
		v[k].shortestPathNum = v[pre[k]].shortestPathNum;
		v[k].maxTeamAmount = v[pre[k]].maxTeamAmount + vertex[k];
		
		for(int i=0;i<n;i++){
            if(edge[k][i] == INF) continue;
            if(v[k].shortestPath + edge[k][i] < v[i].shortestPath && p[i] == 0){
                v[i].shortestPath = v[k].shortestPath + edge[k][i];
                pre[i] = k;
            } else if(v[i].shortestPath + edge[k][i] == v[k].shortestPath && p[i] == 1){
				if(v[i].maxTeamAmount + vertex[k] > v[k].maxTeamAmount) {
					v[k].maxTeamAmount = v[i].maxTeamAmount + vertex[k];	
				}
				if(pre[k] != i) {
					v[k].shortestPathNum += v[i].shortestPathNum;
				}
			}
		}		
	}
	
	return v[end];
}

int main() {
	
    int m,n,c1,c2;
	while(scanf("%d%d%d%d", &n,&m,&c1,&c2) != EOF){
		for(int i=0;i<n;i++){
			if(scanf("%d", &vertex[i])){};
		}
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				edge[i][j] = INF;
			}
		}
		
		int k,l,len;
		for(int i=0;i<m;i++){
			if(scanf("%d%d%d", &k,&l,&len)){};
			edge[k][l] = len;
			edge[l][k] = len;
		}
		
		Vertex res = dijkstra(n, c1, c2);
		printf("%d %d\n", res.shortestPathNum, res.maxTeamAmount);		
	}
	
	return 0;
}

