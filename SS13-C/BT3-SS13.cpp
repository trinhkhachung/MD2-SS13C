#include <stdio.h>
#include <string.h>
#include <ctype.h>
int countChar(char str[100], char findValue[1], int a){
    int count=0;
    for (int i = 0; i < a; i++){
        if (findValue==str[i]){
            return 0;
        }
    }
    for (int i = a; i < strlen(str); i++){
        if (findValue==str[i]){
            count++;
        }
    }
    printf("%c :%d\n",findValue,count);
    return 0;
}
int main(){
    char str[100];
    printf("Nhap chuoi ");
    scanf("%s", &str);
	for (int i = 0; i < strlen(str); i++){
        countChar(str,str[i],i);
    }
}
