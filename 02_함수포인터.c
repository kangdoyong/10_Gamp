#include <stdio.h>

// 복수의 함수가 존재
// 이 때, 복수의 함수가 반환 타입 동일, 파라미터 목록(타입, 갯수)도 동일

// 경우에 따라, 복수의 함수 중 특정 함수를 실행해야할 경우
// 위와 같은 상황에 함수포인터를 활용할 수 있음

double Add(int a, int b)
{
	return (double)a + b;
}

double Sub(int a, int b)
{
	return (double)a - b;
}

double Mul(int a, int b)
{
	return (double)a * b;
}

double Div(int a, int b)
{
	return (double)a / b;
}

void main()
{
	double (*Calculate)(int, int) = NULL;

	int a, b;
	int oper;

	printf("a : ");
	scanf("%d", &a);

	printf("b : ");
	scanf("%d", &b);

	printf("1. Add, 2. Sub, 3. Mul, 4. Div\n");
	scanf("%d", &oper);

	// 사용하는 함수들의 형태가 동일하므로,
	// 서로 다른 함수지만, 하나의 함수포인터에 담을 수 있음
	switch (oper)
	{
	case 1: Calculate = Add; break;
	case 2: Calculate = Sub; break;
	case 3: Calculate = Mul; break;
	case 4: Calculate = Div; break;
	}

	// 추가적인 작업이 존재할 때
	// oper 값을 검사한 후(경우를 검사한 후)
	// 각각의 함수를 호출할 필요없이 함수 포인터를 통해 바로 호출
	printf("결과 : %.2lf \n", Calculate(a, b));
}