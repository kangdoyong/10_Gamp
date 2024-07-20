#include <stdio.h>
#include <string.h>

typedef struct Wallet
{
	char owner[256];
	int money;
}Wallet;

void PrintWalletInfo(Wallet* wallet);

void main()
{
	Wallet myWallet;
	strcpy(myWallet.owner, "철수");
	myWallet.money = 10000;

	PrintWalletInfo(&myWallet);
}

void PrintWalletInfo(Wallet* wallet)
{
	/*printf("%s의 지갑에는 %d 원이 있습니다.\n",
		(*wallet).owner, (*wallet).money);*/

	printf("%s의 지갑에는 %d 원이 있습니다.\n",
		wallet->owner, wallet->money);

	// 구조체 포인터 변수에서 멤버에 접근 시,
	// -> 연산자를 통해 멤버에 접근 가능
	// 결과 : 구조체 변수 주소 상태에서 바로 멤버 실제값에 접근 가능
}
