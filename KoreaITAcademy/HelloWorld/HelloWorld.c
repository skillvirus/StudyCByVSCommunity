#include <stdio.h>
#include "UserHeaderFile.h"

//void printByUser(char *pString);

int main(void)
{
	char strHello[256] = "Hello World";

	printByUser(strHello);
	return 0;
}

//void printByUser(char *pString)
//{
//	printf("%s\n", pString);
//}