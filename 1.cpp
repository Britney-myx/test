#include <stdio.h>
int main() {
	int num, reversedNum = 0, remainder, originalNum;
	printf("请输入一个正整数：");
	scanf_s("%d", &num);
	originalNum = num;
	while (num != 0) {
		remainder = num % 10;
		reversedNum = reversedNum * 10 + remainder;
		num /= 10;
	}
	if (originalNum == reversedNum) {
		printf("%d 是回文数\n", originalNum);
	}
	else {
		printf("%d 不是回文数\n", originalNum);
	}
	return 0;
}