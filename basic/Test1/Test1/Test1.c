#include <stdio.h>

int n;

int main() {

	char arr[] = "hong";
	char *arr1 = "hong";

	//printf("arr : %c", arr);
	//printf("arr[0]: %c\n", arr[0]);
	//printf("arr[1]: %c\n", arr[1]);
	//printf("arr[2]: %c\n", arr[2]);
	//printf("arr[3]: %c\n", arr[3]);
	//printf("arr[4]: %s\n", &arr[4]); // 이상한 문장이 나옴

	printf("arr: %p\n", arr);
	printf("arr1: %p\n", &arr1);
	printf("hong: %p\n", *arr1);
	printf("n: %p\n", &n);

	return 0;
}