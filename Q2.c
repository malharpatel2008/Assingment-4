#include<stdio.h>
int main(){
/*  11
    12 13
    14 15 16
    17 18 19 20 */
	int i,j,k;
	
	for(i=11;i<=20;i++){
		for(j=11;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
		
	}
}
