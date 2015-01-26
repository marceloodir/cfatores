#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv) {
	int ans,aux;
	int N,i;
	//printf("**Versao Simplificada**\n\n");
	while(1==1){
		scanf("%d",&N);
		if(N==0) break;
		ans = 0; aux = N;
		for(i = 2;i<=N/i;++i){
			if(N%i==0){
				while(N%i==0) 
					N  =  N / i;
				++ans;
			}
		}
		if(N!=1 && N!=aux) ++ans;
		printf("%d : %d\n",aux,ans);
	}	
	return 0;
}
