#include<stdio.h>
int main()
{
	int i, j, sp, a=10;
	for(int i=1; i<=a; i++){
		for(int sp=i; sp<a; sp++){
			printf(" ");
		}
		for(int j=1; j<=(2*i-1); j++){
			if(j==1 || j==(2*i-1) || i==a){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
/*
         *
        * *
       *   *
      *     *
     *       *
    *         *
   *           *
  *             *
 *               *
*******************
*/