#include <stdio.h>
#include <string.h>
#include "mystrstr.h"

int main() {
	const char str1[10] = "abcdxyz";
	const char str2[20] = "cdx";
	const char str3[30] = "efghij";
	char* retS = mystrstr(str1, str2);
	char* retF = mystrstr(str1, str3);

	printf("result(success): %s\n result(fail): %s\n", retS, retF);

	return (0);
}
