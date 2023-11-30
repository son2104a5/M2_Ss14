#include<stdio.h>
int main(){
	int a=100;
	int *ptr=&a;
	printf("Gia tri cua bien a: %d\n",a);
	printf("Gia tri cua bien a: %d\n",*ptr);
	printf("Dia chi cua bien a: %d\n",&a);
	printf("Dia chi cua bien a: %d\n",ptr);
}
