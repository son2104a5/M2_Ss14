#include<stdio.h>
int sub(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
	return temp;
}
int main(){
	int a=40,b=66;
	printf("Hieu cua 2 so a va b truoc khi doi cho: %d\n",a-b);
	sub(&a,&b);
	printf("Hieu cua 2 so a va b truoc khi doi cho: %d\n",a-b);
}
