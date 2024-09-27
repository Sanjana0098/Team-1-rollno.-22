//string compare
#include<stdio.h>
#include<string.h>

main(){
	char fname[25],cname[25];
	int x;
	printf("Enter the first string:\n");
	scanf("%s",fname);
	printf("Enter the second string:\n");
	scanf("%s",cname);
	x=strcmp(fname,cname);
	if(x==0){
		printf("Strings are same");
	}
	else{
		printf("strings are not same");
	}

}
