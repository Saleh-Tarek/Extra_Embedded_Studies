/*
 ============================================================================
 Name        : main.c
 Created on  : Oct 18, 2023
 Author      : Eng. Saleh Tarek
 ========================================================
 Program Description : 




 ============================================================================
*/
#include <stdio.h>
int main ()
{
	char array [100]= {'T','A','R','E','K','*','_','.','\0'};
	//printf("0- %s\n",array);
	//scanf("%s",array); /* Will terminate with space*/
	
	//gets(array);
	
	scanf("%[^\n]%*c",array);

	int i;
	printf("1-");
	//i<(sizeof(array)) ---> '\0'
	for (i=0; array[i]!='\0'; i++)
	{
		printf("%c",array[i]);
	}



	return 0;
}
