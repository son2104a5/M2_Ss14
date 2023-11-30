#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void changeArr(char *arr, char *str){
	char temp = *arr;
	*arr=*str;
	*str=temp;
}
int main(){
	char temp;
	int count=0;
	char search;
	do{
		char arr[100];
		char str[100];
		printf("**************MENU***************\n");
		printf("1. Nhap vao mang\n");
		printf("2. In ra mang\n");
		printf("3. Sao chep mang vao mang khac\n");
		printf("4. Nhap vao mang khac, doi cho 2 mang voi nhau\n");
		printf("5. Dao nguoc mang\n");
		printf("6. Nhap vao 1 ki tu, tim ki tu do trong mang\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap mang arr: ");
				scanf("%s",arr);
				break;
			case 2:
				printf("Mang vua nhap: arr[]=%s\n",arr);
				break;
			case 3:
				strcpy(str, arr);
				printf("Mang duoc sao chep: arr2[]=%s\n",str);
				break;
			case 4:
				printf("Nhap mang str: ");
				scanf("%s",str);
				changeArr(arr, str);
				printf("Mang da duoc doi cho:");
				printf("arr[]=%s\n",str);
				printf("str[]=%s\n",arr);
				break;
			case 5:
				for(int i=0;i<strlen(arr)/2;i++){
					temp=arr[i];
					arr[i]=arr[strlen(arr)-i-1];
					arr[strlen(arr)-i-1]=temp;
				}
				printf("Mang dao nguoc: %s\n",arr);
				break;
			case 6:
	            printf("Nhap phan tu ban muon tim trong mang:");
	            scanf("%s",&search);
				for(int i=0;i<strlen(arr);i++){
				    if(arr[i]==search){
			            count++;
		            }
	            }
				if(count!=0){
				    printf("Phan tu ban tim co trong mang\n");
	            }else if(count==0){
		            printf("Phan tu ban tim khong co trong mang\n");
	            }
				break;
			case 7:
				exit(0);
			default:
				printf("Vui long chon lai gia tri tu 1-7\n");
		}
	}while(1==1);
}
