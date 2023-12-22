#include<stdio.h>
#include<string.h>

void main()
{
	int i;
	char str[100];
	printf("Enter a string : ");
   	gets(str);
	for (i=0;str[i]!='\0';i++) 
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i]=str[i]+'a'-'A';	
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i]=str[i]+'A'-'a';	
		}
	}
	printf("toggle case string :- ");
	printf("%s\n", str);
}

