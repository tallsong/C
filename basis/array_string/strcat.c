#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main0401(void)
{
	char src[] = "world";
	char dest[] = "hello";

	char *p = strcat(dest, src);

	printf("p = %s\n", p);
	printf("dest = %s\n", dest);

	system("pause");
	return EXIT_SUCCESS;
}

int main1()
{
	char src[] = "world";
	char dest[6] = "hello";

	char *p = strcat(dest, src);
	printf("p = %s\n", p);
	printf("dest = %s\n", dest);

	printf("%lu\n", strlen(dest));

	return 0;
}
int main()
{
	char *str1 = "helloworld";
	char *str2 = "helloz";

	printf("ret = %d\n", strncmp(str1, str2, 8));
	return 0;
}
