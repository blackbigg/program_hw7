#include <stdio.h>
#include <stdlib.h>
#define MAX 80

void main()
{
	FILE* fptr;
	char str[MAX];
	int bytes;
	fptr = fopen("output.txt", "r");
	while (!feof(fptr))
	{
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s\n", str);
	}
	fclose(fptr);
	system("pause");
}