#include <stdio.h>

void main()
{
	int n = 10;
	int k = 20;

	// n의 시작주소를 p에 할당
	int* p = &n;

	// 포인터 변수 p를 이용해서, 
	// n에 역참조하여 n의 현재값에 15를 더 함
	*p += 15;

	// k의 시작 주소를 p에 할당
	p = &k;

	printf("*p는 %d \n", *p);
	printf("n은 %d \n", n);
	printf("k는 %d \n", k);
}