#include<stdio.h>
#include<string.h>
main()
{
	char fname[25],cname[25];
	printf("Enter the first name ");
	scanf("%s",fname);

	strcpy(cname,fname);
	printf("Your name is %s ",cname);
	
	return 0;
	
}
