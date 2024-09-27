#include<stdio.h>
#include<string.h>
main(){
	char fname[25];
	int x;
	printf("Enter your name ");
	scanf("%s",&fname);
	x=strlen(fname);
	printf("Your name is = %d",x);
}
