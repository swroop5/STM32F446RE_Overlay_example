#include <stdio.h>
#include <stdlib.h>

#include "diag/Trace.h"

extern void foo(int x);

// Some RW and ZI data

void func1_Impl(void)
{
	char* func1_string = "func1 called\n";
	int func1_values[20];

	unsigned int i;
	trace_printf(func1_string);
	for(i = 19; i; i--)
	{
		func1_values[i] = rand();
		foo(i);
		trace_printf("%d ", func1_values[i]);
	}
	printf("\n");

}
