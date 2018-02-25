#include <gtest\gtest.h>
#include "formConverter.h"


/*UNIT TESTS TO ALL FUNCTIONS*/

TEST(TestBitShiftCalculator, BitShiftCalc) {

	/************************************************************************************/

	/*Test that Decimal -> binary works*/
	EXPECT_EQ(1010, convertDecimalToBinary(10));
	/*Test that Decimal -> binary works*/
	EXPECT_EQ(100000, convertDecimalToBinary(32));
	/*Test that Decimal -> binary works*/
	EXPECT_EQ(101010, convertDecimalToBinary(42));

	/************************************************************************************/

	/*Test that binary -> Decimal works*/
	EXPECT_EQ(10, convertBinaryToDecimal(1010));
	/*Test that binary -> Decimal works*/
	EXPECT_EQ(32, convertBinaryToDecimal(100000));
	/*Test that binary -> Decimal works*/
	EXPECT_EQ(42, convertBinaryToDecimal(101010));

	/************************************************************************************/

	/*EXPECTED RESULT SHOULD BE 42*/
	char test[] = "0x2A";
	long a = hexadecimal_to_decimal(test);
	printf("Decimal Equivalent: %ld\n", a);
	/*EXPECTED RESULT SHOULD BE 21*/
	char test1[] = "0x15";
	long b = hexadecimal_to_decimal(test1);
	printf("Decimal Equivalent: %ld\n", b);
	/*EXPECTED RESULT SHOULD BE 170*/
	char test2[] = "0xAA";
	long c = hexadecimal_to_decimal(test2);
	printf("Decimal Equivalent: %ld\n", c);

	/************************************************************************************/

	/*EXPECTED RESULT SHOULD BE 0X2A*/
	decimal_to_hexadecimal(42);
	/*EXPECTED RESULT SHOULD BE 0x15*/
	decimal_to_hexadecimal(21);
	/*EXPECTED RESULT SHOULD BE 0xAA*/
	decimal_to_hexadecimal(170);

	/************************************************************************************/

	/*EXPECTED RESULT SHOULD BE 10001*/
	char test3[] = "11";
	hexadecimalToBinary(test3);
	/*EXPECTED RESULT SHOULD BE 10100001*/
	char test4[] = "A1";
	hexadecimalToBinary(test4);
	/*EXPECTED RESULT SHOULD BE 11001110*/
	char test5[] = "CE";
	hexadecimalToBinary(test5);

	/************************************************************************************/

	/*EXPECTED RESULT SHOULD BE 0xF*/
	int decimal;
	decimal = convertBinaryToDecimal(1111);
	decimal_to_hexadecimal(decimal);

	/*EXPECTED RESULT SHOULD BE 0x96*/
	decimal = convertBinaryToDecimal(10010110);
	decimal_to_hexadecimal(decimal);

	/*EXPECTED RESULT SHOULD BE 71a*/
	decimal = convertBinaryToDecimal(11100011010);
	decimal_to_hexadecimal(decimal);

	/************************************************************************************/
	// 
}
