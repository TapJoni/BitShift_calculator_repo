#include "formConverter.h"

#include "stdio.h"
#include "stdlib.h"

#include <string.h>
#include "math.h"

long long convertDecimalToBinary(int n)
{
	long long binaryNumber = 0;
	int remainder, i = 1, step = 1;

	while (n != 0)
	{
		remainder = n % 2;
		n /= 2;
		binaryNumber += remainder * i;
		i *= 10;
	}
	return binaryNumber;
}

int convertBinaryToDecimal(long long n)
{
	int decimalNumber = 0, i = 0, remainder;
	while (n != 0)
	{
		remainder = n % 10;
		n /= 10;
		decimalNumber += remainder * pow(2, i);
		++i;
	}
	return decimalNumber;
}

void decimal_to_hexadecimal(int x)
{
	char hexa[17];
	sprintf(hexa, "%X", x);
	printf("The number %d, turned to hexadecimal is: %s\n", x, hexa);
}

long hexadecimal_to_decimal(char *hexa)
{
	long n = strtol(hexa, NULL, 16);
	return n;
}

void hexadecimalToBinary(char *hexa)
{
	char bin[65] = "";
	int i = 0;

	/* Extract first digit and find binary of each hex digit */
	for (i = 0; hexa[i] != '\0'; i++)
	{
		switch (hexa[i])
		{
		case '0':
			strcat(bin, "0000");
			break;
		case '1':
			strcat(bin, "0001");
			break;
		case '2':
			strcat(bin, "0010");
			break;
		case '3':
			strcat(bin, "0011");
			break;
		case '4':
			strcat(bin, "0100");
			break;
		case '5':
			strcat(bin, "0101");
			break;
		case '6':
			strcat(bin, "0110");
			break;
		case '7':
			strcat(bin, "0111");
			break;
		case '8':
			strcat(bin, "1000");
			break;
		case '9':
			strcat(bin, "1001");
			break;
		case 'a':
		case 'A':
			strcat(bin, "1010");
			break;
		case 'b':
		case 'B':
			strcat(bin, "1011");
			break;
		case 'c':
		case 'C':
			strcat(bin, "1100");
			break;
		case 'd':
		case 'D':
			strcat(bin, "1101");
			break;
		case 'e':
		case 'E':
			strcat(bin, "1110");
			break;
		case 'f':
		case 'F':
			strcat(bin, "1111");
			break;
		default:
			printf("Invalid hexadecimal input.");
		}
	}
	printf("Binary number = %s\n", bin);


}

