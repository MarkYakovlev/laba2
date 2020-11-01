#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0, b = 0, i = 0;
	char str[256], glasnie[] = "AEYOUI";
	printf("Enter the string: ");
	fgets(str, 256, stdin);
	while (str[i] != '\0') {

		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			a++;
		else {
			for (int j = 0; j < 6; j++) {
				if ((str[i - a] == glasnie[j]) || (str[i - a] == glasnie[j] + 32)) {
					b = i;
					for (i = i - a; i <= b - 1; i++) {
						printf("%c", str[i]);
					}
					printf(" ");


				}
			}
			a = 0;
		}
		i++;
	}
	return 0;
}