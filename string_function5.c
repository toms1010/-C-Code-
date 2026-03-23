#include <stdio.h>

#include <string.h>

int main ()
{

	char str1[] = "banana";
	char str2[] = "banana1";

	int result = strcmp(str1, str2); 
	
	printf("%d", result);
	return 0;
} 
