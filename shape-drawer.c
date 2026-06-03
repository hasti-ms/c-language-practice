#include<stdio.h>
int circle(int a)
{
	for(int i=-a; i<=a; i++){
		for(int j=-a; j<=a; j++){
			int f=(i*i) + (j*j);
			if(f<a*a+a && f>a*a-a){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
int triangle(int a)
{
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
int square(int a)
{
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

int main()
{
	int choice, a;
	while(1){
	
	printf("1. circle\n");
	printf("2. tringle\n");
	printf("3. square\n");
	printf("0 for exit\n");
	
	printf("choose shape no.:");
	scanf("%d",&choice);
	 
	if(choice == 0){
	 	printf("exited!!");
	 	break;
	 }
	 
	printf("\nenter size:");
	scanf("%d", &a);
	
	switch (choice){
		case 1:
			circle(a);
			break;
		case 2:
			triangle(a);
			break;
		case 3:
			square(a);
			break;
	    }
    }
}
/*
1. circle
2. tringle
3. square
0 for exit
choose shape no.:1

enter size:5
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
1. circle
2. tringle
3. square
0 for exit
choose shape no.:2

enter size:4
   *
  * *
 *   *
*******
1. circle
2. tringle
3. square
0 for exit
choose shape no.:3

enter size:4
 *  *  *  *
 *        *
 *        *
 *  *  *  *
1. circle
2. tringle
3. square
0 for exit
choose shape no.:0
exited!!
*/