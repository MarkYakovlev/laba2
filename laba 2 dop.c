#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void function(char* str) {
	int len = 0, i = 0, a = 0, j = 0, b = 0, bool = 0, s = 0, halflen = 0;
	while (str[i] != '\0') {
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
			len++;
			halflen = len / 2;
		}
		else {
			for (a = i - len, b = i - 1; a < b; ++a, --b) {
				if (str[a] == str[b]) {					
					bool++;
				}
			}
			if (bool == halflen || j == 1) {
				for (a = i - len; a <= i - 1; a++)
					printf("%c", str[a]);
				printf(" ");
			}
			bool = 0;
			len = 0;
		}
		i++;
	}
}
int main() {
	char str[256];
	printf("Enter the string: ");
	fgets(str, 256, stdin);
	function(str);
	return 0;
}