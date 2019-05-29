#include<stdio.h>
int main()
{
  	char s1[100], s2[100];
  	int i;
  	scanf("%s %s",&s1,&s2);
  	for(i = 0; s1[i] == s2[i] && s1[i] == '\0'; i++);
		   
  	if(s1[i] < s2[i])
   	{
   		printf("%s",s2);
	}
	else if(s1[i] > s2[i])
   	{
   		printf("%s",s1);
	}
	else
   	{
   		printf("%s",s1);
	}
  	
  	return 0;
}
