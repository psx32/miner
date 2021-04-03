#include "miner.h"
#include <stdio.h>
#include <stdlib.h>

#ifndef MINER_MENU_H
#define MINER_MENU_H

void minerMenu()
{
	int choice;
	
	printf("-- MINING MENU -- \n");
	printf("(1) Start Mining \n");
	printf("(2) Exit the program \n");

	printf("> ");
	scanf("%d", &choice);
	printf("\n");

	switch(choice)
	{
		case 1:
			miner();
		break;
		case 2:
			exit(-1);
		break;
	}	
}

#endif
