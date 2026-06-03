#include<stdio.h>
int main()
{
	int i, j, sp, a=5;
	for(int i=1; i<=a; i++){
		for(int j=1; j<=a; j++){
			if(i==1 || i==a || j==1 || j==a){
				printf(" * ");
			}else{
				printf("   ");
			}
		}
		printf("\n");
	}
}
/*
 *  *  *  *  *
 *           *
 *           *
 *           *
 *  *  *  *  *
*/