#include <stdio.h>

typedef struct Friend
{
	char name[256];
	int age;
}Friend, *PFriend;
// typedef을 이용하여 구조체 포인터 타입의 별칭을 지정
// Friend* p;
// PFriend p;

// 친구 목록을 초기화하는 함수
void InitFriends(PFriend p, int length);
// 친구 목록을 출력하는 함수
void PrintFriends(PFriend p, int length);
// 친구 목록 중, 특정 친구 정보를 변경하는 함수
void SetFriendInfo(PFriend p);

void main()
{
	// 친구 목록을 나타낼 배열
	Friend friends[5];

	// 친구 목록 길이 구함
	int length = sizeof(friends) / sizeof(friends[0]);

	// 친구 목록을 초기화
	InitFriends(friends, length);

	while (1)
	{
		// 화면 지우기
		system("cls");

		// 친구 목록 출력
		PrintFriends(friends, length);

		// 원한다면 친구 정보 추가 or 프로그램 종료
		printf("몇번째 친구 목록을 수정하시겠습니까? (종료 : -1) \n");
		int input;
		scanf("%d", &input);

		// scanf 입력으로 인해 입력 버퍼에 개행문자가 남아있음
		// 해당 개행문자로 인해, 친구 정보 수정 시 gets 입력이
		// 바로 종료됨.
		// 문제 해결을 위해 입력 버퍼의 개행문자를 비워내야 함

		// getchar() : 문자를 하나씩 입력받습니다.
		// -> 입력버퍼에서 문자를 하나씩 가져옴
		while (getchar() != '\n');
		// 결과적으로 입력 버퍼에 있는 값들을 전부 비우는 행위

		// 종료
		if (input == -1)
		{
			system("cls");
			printf("프로그램을 종료합니다.\n");
			Sleep(1000);
			break;
		}
		// 잘못된 입력을 했는지
		else if (input < 1 || input > length)
		{
			system("cls");
			printf("잘못된 입력입니다.\n");
			Sleep(1000);
		}
		// 정상적인 입력
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
		strcpy(p[i].name, "등록되지 않음");
		p[i].age = 0;
	}
}

void PrintFriends(PFriend p, int length)
{
	for (int i = 0; i < length; ++i)
	{
		printf("%d번째 \n", i + 1);
		printf("%s \n", p[i].name);
		printf("%d살 \n", p[i].age);
	}
}

void SetFriendInfo(PFriend p)
{
	printf("친구 이름을 입력해주세요.\n");
	gets(p->name);

	printf("%s의 나이를 입력해주세요.\n", p->name);
	scanf("%d", &p->age);
}
