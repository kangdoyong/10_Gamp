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
	strcpy(myWallet.owner, "ö��");
	myWallet.money = 10000;

	PrintWalletInfo(&myWallet);
}

void PrintWalletInfo(Wallet* wallet)
{
	/*printf("%s�� �������� %d ���� �ֽ��ϴ�.\n",
		(*wallet).owner, (*wallet).money);*/

	printf("%s�� �������� %d ���� �ֽ��ϴ�.\n",
		wallet->owner, wallet->money);

	// ����ü ������ �������� ����� ���� ��,
	// -> �����ڸ� ���� ����� ���� ����
	// ��� : ����ü ���� �ּ� ���¿��� �ٷ� ��� �������� ���� ����
}
