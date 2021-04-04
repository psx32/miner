#include <stdio.h>
#include <stdlib.h>

#ifndef HACCOUNT_H
#define HACCOUNT_H

void holderAccount()
{
	FILE *vReader;
	float hAccount;

	vReader = fopen("Value.txt", "r");
	fscanf(vReader, "%f", &hAccount);
	fclose(vReader);

	printf("-- ACCOUNT MENU --\n");
	printf("::AMOUNT: %f \n", hAccount);
}

#endif
