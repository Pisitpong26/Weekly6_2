#include<stdio.h>
int main() {
	int a;
	scanf_s("%d", &a);
	int n = a;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= a + n - 1; j++) {
			if (i==1 || j==1 || j==a+n-1)
			printf("*");
			else {printf(" ");}
		}
		printf("\n");
		n = n - 2;
	}
	n = 2;
	for (int i = 1; i <= a - 1; i++) {
		for (int j = a - 1; j >= i; j--) {
			printf(" ");
		}
		for (int j = 1; j <= i + n; j++) {
			if (j==1 || i == a-1 || j==i+n)
			printf("*");
			else { printf(" "); }
		}
		printf("\n");
		n = n + 1;
	}
	return 0;

}