#include <stdio.h>

/*1CS1 ສຸພະໄຊ ເນົາວະລາດ*/
// a pattern of number in a shape of a right triangle

int main() {
	int n;
	printf("Input a positive number: ");
	scanf("%d", &n);

	printf("\n");
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=i;j++) {
			printf("%d\t", j);		}
		printf("\n\n\n");
	}
	
	return 0;
}
