#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int k = 0, c = 0, i = 0;
	char str[256], glasn[] = "AEYOUI";
	printf("Enter the string: ");
	fgets(str, 256, stdin);
	while (str[i] != '\0') {

		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] < 'z'))
			k++;
		else {
			for (int j = 0; j < 12; j++) {
				if ((str[i - k] == glasn[j]) || (str[i - k] == glasn[j] + 32)) {
					c = i;
					for (i = i - k; i <= c - 1; i++) {
						printf("%c", str[i]);
					}
					printf(" ");


				}
			}
			k = 0;
		}
		i++;
	}
	return 0;
}