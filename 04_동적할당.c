#include <stdio.h>
#include <stdlib.h>

void main()
{
	// ���� �迭�� ũ�⸦ ��Ÿ���� ����
	int size = 0;
	// �����Ҵ��� �迭�� ���� �ּҸ� ���� ������ ����
	int* pArray = NULL;

	while (1)
	{
		// �Ҵ��� �����Ͱ� �ִٸ� ���� ���
		if (size > 0)
		{
			printf("�Է��� �� : ");
			for (int i = 0; i < size; ++i)
				printf("%d ", pArray[i]);
			printf("\n");
		}

		printf("���� �Է� (���� : -1) : ");
		int input;
		scanf("%d", &input);

		if (input == -1)
			break;
		else
		{
			// �����͸� �߰� �Ҵ��� ���̹Ƿ�,
			// �迭 ����� ����
			++size;

			// pArray�� ��ȿ����?
			// ��ȿ�ϴٸ�(�޸� �ּҰ� ����ִٸ�)
			// -> ������ �޸𸮸� �Ҵ��� ���� �ִٶ�� ��
			// ��ȿ���� �ʴٸ� (NULL �̶��)
			// -> ���� �Ҵ��� �� ���� ���ٴ� ��(�޸� ���� �Ҵ�)

			pArray = pArray ? (int*)realloc(pArray, size * sizeof(int)) : (int*)malloc(sizeof(int));

			// void* realloc(block, size) : block�� ����Ű�� �޸� ������ ũ�⸦
			// size ����Ʈ�� ũ��� ���Ҵ�
			// ���Ҵ����� ������ �÷��� ��
			// ���Ҵ� ���� �Է��� ���� �����Ǹ�, ���� �߰��� �޸𸮿��� �����Ⱚ�� ����Ǿ� �ֽ��ϴ�.
			// ���Ҵ����� ������ �ٿ��� ��
			// �Էµ� �����ʹ� ����� �� ����
			// ���Ҵ� �������� �޸��� ��ġ�� �ٲ� �� �����Ƿ�,
			// �׻� realloc �Լ��� ��ȯ ���� ������ ������ �ٽ� �޾� ����ؾ� ��

			// �Է��� ���� �Ҵ��� �޸𸮿� ����
			pArray[size - 1] = input;
		}
	}

	free(pArray);
	pArray = NULL;
}