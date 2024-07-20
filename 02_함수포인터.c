#include <stdio.h>

// ������ �Լ��� ����
// �� ��, ������ �Լ��� ��ȯ Ÿ�� ����, �Ķ���� ���(Ÿ��, ����)�� ����

// ��쿡 ����, ������ �Լ� �� Ư�� �Լ��� �����ؾ��� ���
// ���� ���� ��Ȳ�� �Լ������͸� Ȱ���� �� ����

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

	// ����ϴ� �Լ����� ���°� �����ϹǷ�,
	// ���� �ٸ� �Լ�����, �ϳ��� �Լ������Ϳ� ���� �� ����
	switch (oper)
	{
	case 1: Calculate = Add; break;
	case 2: Calculate = Sub; break;
	case 3: Calculate = Mul; break;
	case 4: Calculate = Div; break;
	}

	// �߰����� �۾��� ������ ��
	// oper ���� �˻��� ��(��츦 �˻��� ��)
	// ������ �Լ��� ȣ���� �ʿ���� �Լ� �����͸� ���� �ٷ� ȣ��
	printf("��� : %.2lf \n", Calculate(a, b));
}