#pragma once
#include "Class1.h"
#include <stdio.h>



Class1::Class1()
{
	x = 123;

	printf("Class1::x should equal 123\n");
}


Class1::~Class1()
{
}

int Class1::fn_1()
{
	printf("Class1::fn_1() should return 99\n");

	return 99;
}
