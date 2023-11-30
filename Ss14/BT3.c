#include<stdio.h>
#include<string.h>
int lengthstr1(int str1){
	int count1;
	int length1=strlen(str1);
	for(int i=0;i<=length1;i++){
		count1++;
	}
	return count1;
}
int lengthstr2(int str2){
	int count2;
	int length2=strlen(str2);
	for(int i=0;i<=length2;i++){
		count2++;
	}
	return count2;
}
int main(){
	int count1,count2;
	int str1[]={};
	printf("Nhap chuoi 1:");
	scanf("%s",&str1);
	printf("%s\n",str1);
	int str2[]={};
	printf("Nhap chuoi 2:");
	scanf("%s",&str2);
	printf("%s\n",str2);
	lengthstr1(&*str1);
	lengthstr2(&*str2);
	if(count1>count2){
		printf("Chuoi thu 1 dai hon chuoi thu 2");
	}else{
		printf("Chuoi thu 2 dai hon chuoi thu 1");
	}
}
