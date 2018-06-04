#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern void func1_Impl(void);

extern void func2_Impl(void);



extern void load_overlay(int n);



void Sub_func1(void)
{
	load_overlay(1);

	func1_Impl();
}



void Sub_func2(void)
{
	load_overlay(2);

	func2_Impl();
}


