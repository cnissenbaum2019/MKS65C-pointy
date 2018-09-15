#include <stdio.h>

int main()
{
	unsigned int num = 30000000000;
	char* pointy = &num;

	printf("\nincrement by 1:\n");

	printf("int in dec: %d \n", num);
	printf("int in hex: %x \n", num);

	int x = 4;

	while (x) {
		printf("byte: %hhx \n", *pointy);
		*pointy = *pointy + 1;
		printf("byte changed: %hhx \n", *pointy);
		printf("int changed: %x \n", num);
		pointy++;
		x--;
	}

	printf("\n\n\nincrement by 16:\n");

	num = 30000000000;
	pointy = &num;

	printf("int in dec: %d \n", num);
	printf("int in hex: %x \n", num);

	x = 4;

	while (x) {
		printf("byte: %hhx \n", *pointy);
		*pointy = *pointy + 16;
		printf("byte changed: %hhx \n", *pointy);
		printf("int changed: %x \n", num);
		pointy++;
		x--;
	}

	printf("\n");

	return 0;
}