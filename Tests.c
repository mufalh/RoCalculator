#include "Tests.h"
#include "Methods.h"


void __CUT_BRINGUP__Pass( void )
{

}

void __CUT__TestA( void ) //AddTwoRomanNumeralsTest
{
	ASSERT(strcmp(addRn("I", "III"),"IV") == 0, "Successful Test" );
	ASSERT(strcmp(addRn("XI", "XX"),"XXXI") == 0, "Successful Test" );
	ASSERT(strcmp(addRn("XM", "VX"),"CMXCV") == 0, "Successful Test" );
	ASSERT(strcmp(addRn("MM", "DCX"),"MMDCX") == 0, "Successful Test" );

}

void __CUT__TestB( void ) //SubtractTwoRomanNumeralsTest
{
	ASSERT(strcmp(subRn("III", "I"),"II") == 0, "Successful Test" );
	ASSERT(strcmp(subRn("XX", "XI"),"IX") == 0, "Successful Test" );
	ASSERT(strcmp(subRn("XM", "VX"),"CMLXXXV") == 0, "Successful Test" );
	ASSERT(strcmp(subRn("MM", "DCX"),"MCCCXC") == 0, "Successful Test" );

}

void __CUT__TestC( void ) //CheckIfLettersAreRomanNumeralTest
{
	ASSERT(1 == TestRn("IV"), "Successful Test" );
	ASSERT(1 == TestRn("XI"), "Successful Test" );
//	ASSERT(0 == TestRn("ABC"), "Successful Test" );
//	ASSERT(0 == TestRn("123"), "Successful Test" );
//	ASSERT(0 == TestRn("$#%&"), "Successful Test" );

}

void __CUT__TestD( void ) //CheckIfTheResultIsEqualOrLessThanZeroTest
{
//	ASSERT(strcmp(subRn("IV", "IV"),"Overflow") == 0, "Successful Test" );
//	ASSERT(strcmp(subRn("I", "III"),"Overflow") == 0, "Successful Test" );
}

void __CUT_TAKEDOWN__Pass( void )
{

}




