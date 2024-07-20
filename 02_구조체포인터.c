#include <stdio.h>

typedef struct Friend
{
	char name[256];
	int age;
}Friend, *PFriend;
// typedef�� �̿��Ͽ� ����ü ������ Ÿ���� ��Ī�� ����
// Friend* p;
// PFriend p;

// ģ�� ����� �ʱ�ȭ�ϴ� �Լ�
void InitFriends(PFriend p, int length);
// ģ�� ����� ����ϴ� �Լ�
void PrintFriends(PFriend p, int length);
// ģ�� ��� ��, Ư�� ģ�� ������ �����ϴ� �Լ�
void SetFriendInfo(PFriend p);

void main()
{
	// ģ�� ����� ��Ÿ�� �迭
	Friend friends[5];

	// ģ�� ��� ���� ����
	int length = sizeof(friends) / sizeof(friends[0]);

	// ģ�� ����� �ʱ�ȭ
	InitFriends(friends, length);

	while (1)
	{
		// ȭ�� �����
		system("cls");

		// ģ�� ��� ���
		PrintFriends(friends, length);

		// ���Ѵٸ� ģ�� ���� �߰� or ���α׷� ����
		printf("���° ģ�� ����� �����Ͻðڽ��ϱ�? (���� : -1) \n");
		int input;
		scanf("%d", &input);

		// scanf �Է����� ���� �Է� ���ۿ� ���๮�ڰ� ��������
		// �ش� ���๮�ڷ� ����, ģ�� ���� ���� �� gets �Է���
		// �ٷ� �����.
		// ���� �ذ��� ���� �Է� ������ ���๮�ڸ� ������� ��

		// getchar() : ���ڸ� �ϳ��� �Է¹޽��ϴ�.
		// -> �Է¹��ۿ��� ���ڸ� �ϳ��� ������
		while (getchar() != '\n');
		// ��������� �Է� ���ۿ� �ִ� ������ ���� ���� ����

		// ����
		if (input == -1)
		{
			system("cls");
			printf("���α׷��� �����մϴ�.\n");
			Sleep(1000);
			break;
		}
		// �߸��� �Է��� �ߴ���
		else if (input < 1 || input > length)
		{
			system("cls");
			printf("�߸��� �Է��Դϴ�.\n");
			Sleep(1000);
		}
		// �������� �Է�
		else
		{
			system("cls");
			SetFriendInfo(&friends[input-1]);
			//SetFriendInfo(friends + (input - 1));
		}
	}
}

void InitFriends(PFriend p, int length)
{
	for (int i = 0; i < length; ++i)
	{
		strcpy(p[i].name, "��ϵ��� ����");
		p[i].age = 0;
	}
}

void PrintFriends(PFriend p, int length)
{
	for (int i = 0; i < length; ++i)
	{
		printf("%d��° \n", i + 1);
		printf("%s \n", p[i].name);
		printf("%d�� \n", p[i].age);
	}
}

void SetFriendInfo(PFriend p)
{
	printf("ģ�� �̸��� �Է����ּ���.\n");
	gets(p->name);

	printf("%s�� ���̸� �Է����ּ���.\n", p->name);
	scanf("%d", &p->age);
}
