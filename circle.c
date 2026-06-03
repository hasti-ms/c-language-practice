#include<stdio.h>
int main()
{
	int i, j, r=5;
	for(int i=-r; i<=r; i++){
		for(int j=-r; j<=r; j++){
			int f=(i*i) + (j*j);
			if(f<r*r+r && f>r*r-r){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
/*
   *****
  *     *
 *       *
*         *
*         *
*         *
*         *
*         *
 *       *
  *     *
   *****
*/