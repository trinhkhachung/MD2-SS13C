#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main (){
	char str [100];
	int choice;
	int i;
	int count = 0;
	int count1 = 0;
	int count2 = 0;
	do{
		printf("-------------MENU-------------\n");
		printf("1.nhap vao chuoi ki tu\n");
		printf("2.in ra do dai chuoi va noi dung chuoi vua nhap\n");
		printf("3.in ra chuoi dao nguoc\n");
		printf("4.in ra so luong chu cai trong chuoi\n");
		printf("5.in ra so luong chu so trong chuoi\n");
		printf("6.in ra ky tu dac biet co trong chuoi\n");
		printf("7.thoat\n");
		printf("moi nhap\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("moi nhap de in ra chuoi ki tu: \n");
				scanf("%s",&str);
				break;
			case 2:
				printf("chuoi vua nhap la: \n");
				puts(str);
				break;
			case 3:
                for (i=strlen(str)-1;i>=0;i--)
                printf("%c",str[i]);
                printf("\n");
                break;
            case 4:
                for (i=0;i<strlen(str);i++) {
                    if ( isdigit(str[i]) ) 
                        count++;
                }
                printf("so luong chu so trong chuoi la %d\n",count);
                break;
            case 5:
                for (i=0;i<strlen(str);i++) {
                    if ( isalpha(str[i]) )
                        count1 ++;
                }
                printf("\n");
                printf("so luong chu cai trong chuoi la %d",count1);
                break;
            case 6:
                
                for (i=0;i<strlen(str);i++) {
                    if ( (isalpha(str[i])) || (isdigit(str[i])) ) {
                        printf("");
                    } else count2 ++;
                }
                printf("\n");
                printf("so cac ki tu dac biet trong mang la %d",count2);
                break;
            case 7:
            	printf("\n");
                printf("thoat");
                break;
            default:
            	printf("\n");
                printf("khong hop le");
                break;
		}
	}while(choice !=7);
}
