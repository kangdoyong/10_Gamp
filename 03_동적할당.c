#include <stdio.h>
#include <stdlib.h>

void main()
{
	printf("�� ���� ������ ����ұ��?\n");
	int printCnt;
	scanf("%d", &printCnt);

	printf("���� ����� ��½�ų���?\n");
	int startNumber;
	scanf("%d", &startNumber);

	int* pArray = (int*)calloc(printCnt, sizeof(int));
	// void* calloc(count, size) 
	// count * size ��ŭ �޸� ���� �Ҵ�
	// 0���� �ʱ�ȭ ��Ų ��, �޸� ���� �ּҸ� void* �������� ��ȯ

	for (int i = 0; i < printCnt; ++i)
	{
		pArray[i] = startNumber + i;

		printf("array[%d] = %d \n", i, pArray[i]);
	}

	free(pArray);
	pArray = NULL;
}