// In hinh trai tim bang vong lap for.
#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			if ((i == 0 && (j == 1 || j == 2 || j == 4 || j == 5)) ||
				(i == 1 && (j == 0 || j == 3 || j == 6)) ||
				(i == 2 && (j >= 0 && j <= 6)) ||
				(i >= 3 && j >= i - 2 && j <= 8 - i)) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
