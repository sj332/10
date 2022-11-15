#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	int i=300; //pi는 자료형 int,4Byte , 300> 8bit 넘어감 
	
	int *pi=&i;
	char *pc=&i; //4바이트 가지고 있고, 1Byte를 가리킨다 

	printf("%i,%i,%i\n",i,*pi,*pc);
	
	
}  
