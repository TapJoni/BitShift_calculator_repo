// bitShiftCalculator.cpp : Defines the entry point for the console application.
//
#include <stdio.h>
#include <gtest\gtest.h>

#include "formConverter.h"
#include <math.h>

#include <string.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();

	while (1) {

		int selection = 0;

		printf("Select number from 1 - 6 to run wanted operation\n\n");

		printf("1 - Decimal to Binary\n");
		printf("2 - Binary to Decimal\n\n");

		printf("3 - Decimal to Hexadecimal\n");
		printf("4 - Hexadecimal to Decimal\n\n");

		printf("5 - Hexadecimal to Binary\n");
		printf("6 - Binary to Hexadecimal\n\n");

		scanf("%d", &selection);
		printf("\n");

		switch (selection) {

		case 1: 
		{
			int n;
			printf("Enter a decimal number: ");
			scanf("%d", &n);
			printf("%d in decimal = %lld in binary", n, convertDecimalToBinary(n));

			break;
		}
		case 2:
		{
			long long n;
			printf("Enter a binary number: ");
			scanf("%lld", &n);
			printf("%lld in binary = %d in decimal", n, convertBinaryToDecimal(n));

			break;
		}

		case 3:
		{
			printf("Enter a decimal number: ");
			int input = 0;
			scanf("%d", &input);
			decimal_to_hexadecimal(input);
			

			break;
		}
		case 4:
		{
			char hex[17];
			printf("Enter a Hexadecimal Number (e.g. 0x2A): ");
			scanf("%s", &hex);
			long n = hexadecimal_to_decimal(hex);
			printf("Decimal Equivalent: %ld\n", n);
			memset(&hex[0], 0, sizeof(hex));

			break;
		}
		case 5:
		{
			char hex[17];
			printf("Enter any hexadecimal number (e.g. AA !!NOTE!! not 0xAA): ");
			scanf("%s", hex);
			hexadecimalToBinary(hex);
			memset(&hex[0], 0, sizeof(hex));

			break;
		}
		case 6:
		{
			long long n;
			int decimal;
			printf("Enter a binary number: ");
			scanf("%lld", &n);
			decimal = convertBinaryToDecimal(n);

			decimal_to_hexadecimal(decimal);


			break;
		}

		default : 
			printf("Invalid selection\n");

		}

		printf("\n\n\n");

	}
	
	return 0;

}

	


