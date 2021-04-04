#include "account/hAccount.h"
#include "mining/miner_menu.h"
#include "mining/miner.h"
#include <stdio.h>
#include <unistd.h>

int main()
{	
	int choice;
	
	printf("-- MAIN MENU -- \n");
	printf("(1) Mining \n");
	printf("(2) Account \n");
	printf("(2) Exit \n");

	printf("> ");
	scanf("%d", &choice);
	printf("\n");

	switch(choice)
	{
		case 1:
			minerMenu();
		break;
		case 2:
			holderAccount();
		break;
		case 3:
			exit(-1);
		break;
	}
	
	return 0;
}
