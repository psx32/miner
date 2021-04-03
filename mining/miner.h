#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

#ifndef MINER_H
#define MINER_H

#define TRUE 1
#define FALSE 0

void miner()
{
	float minerAcc = 0.0; 		// Miner account
	float mReward = 0.001; 		// Mining Reward
	float holderAcc;		// Holder account
	float maxAmount = 0.009;	// Max mining ammount
	
	printf("*** STARTED ***\n");

	while(TRUE)
	{
		printf("> Account: %f \n", minerAcc);
		printf(":: 0.001 - Added :: \n");

		minerAcc = minerAcc + mReward;
		
		sleep(2);

		if (minerAcc > maxAmount)
		{
			printf(":: DONE :: \n");
			printf("\n");
			break;
		}
	}

	holderAcc = minerAcc; // Holder's account get's the value from minerAcc
	printf("> Holder Balance: %f \n", holderAcc);

	// Write the values to a file
	FILE *fptr;
	fptr = fopen("Value.txt", "w");
	
	printf("\n>>> WRITTEN AMOUNT TO FILE <<<\n");

	fprintf(fptr, "%f", holderAcc);
	fclose(fptr);
}

#endif
