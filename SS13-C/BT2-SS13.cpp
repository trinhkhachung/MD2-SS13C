#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main (){
	char str [100];
	int choice;
	int i;
	int count = 0;
	int n =0;
	int size;
	char str1,str2;
	int j=0;
	int len=strlen(str);
	do{
		printf("-----------MENU----------\n");
		printf("1.nhap vao chuoi ki tu\n");
		printf("2.in ra noi dung chuoi\n");
		printf("3.nhap vao mot ki tu dem so lan xuat hien ky tu trong chuoi\n");
		printf("4.nhap vao 2 ky tu thay the ky tu 2 trong chuoi thanh ky tu moi nhat\n");
		printf("5.nhap vao 1 ky tu xoa bo cac ky tu trong chuoi\n");
		printf("6.thoat\n");
		printf("moi nhap\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("nhap vao chuoi ki tu: \n");
				scanf("%s",&str);
				break;
			case 2:
				printf("chuoi vua nhap la: \n");
				puts(str);
				break;
			case 3:
				fflush(stdin);
				size = strlen(str);
				printf("nhap ki tu can them: \n");
				scanf("%s",&n);
				for(i=0;i<size;i++){
					if(str[i]==n){
						count++;
					}
				}
				printf("so lan xuat hien trong chuoi la: %d",count);
				break;
			case 4:
				printf("Nhap vao 2 ky tu: ");
                scanf("%c %c", &str1, &str2);
                for (int i=0;str[i]!='\0';i++) {
                    if (str[i]==str2) {
                        str[i]=str1;
                    }
                }
                printf("Chuoi sau khi thay the: %s\n", str);
                break;
             case 5:
                printf("Nhap vào 1 ky tu: ");
                scanf("%c",&n);
                for (i=0;i<len;i++) {
                    if (str[i]!=n) {
                        str[j++]=str[i];
                    }
                }
                str[j]='\0';
                printf("Chuoi sau khi xoa: %s\n", str);
                break;
            case 6:
                printf("thoat\n");
                break;
            default:
                printf("Vui long chon tu 1-6\n");
		}
	}while(choice!=6);
}
