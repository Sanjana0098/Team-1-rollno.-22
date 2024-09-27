#include<stdio.h>
#include<string.h>
main()
{
	char fname[25],cname[25];
	
	printf("Enter the first name ");
	scanf("%s",fname);
	printf("Enter the last name ");
	scanf("%s",cname);
	strcat(fname,cname);
	printf("Your name is %s ",fname);
	
	return 0;
	
}
