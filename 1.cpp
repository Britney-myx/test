#include <stdio.h>
int main() {
	int num, reversedNum = 0, remainder, originalNum;
	printf("������һ����������");
	scanf_s("%d", &num);
	originalNum = num;
	while (num != 0) {
		remainder = num % 10;
		reversedNum = reversedNum * 10 + remainder;
		num /= 10;
	}
	if (originalNum == reversedNum) {
		printf("%d �ǻ�����\n", originalNum);
	}
	else {
		printf("%d ���ǻ�����\n", originalNum);
	}
	return 0;
}