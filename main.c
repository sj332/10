#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void swap(int *x, int *y) {
	int temp;
	temp=*x; //출력 여러개
	*x=*y; //매개변수 형식변화 * 
	*y=temp; 
}  

void main(void){
	int a=3;
	int b=5;
	swap(&a,&b);
	printf("a:%i,b:%i\n",a,b);
}
