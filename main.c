#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	int i=300; //pi�� �ڷ��� int,4Byte , 300> 8bit �Ѿ 
	
	int *pi=&i;
	char *pc=&i; //4����Ʈ ������ �ְ�, 1Byte�� ����Ų�� 

	printf("%i,%i,%i\n",i,*pi,*pc);
	
	
}  
