#include <stdio.h>
#include "diag/Trace.h"

extern void foo(int x);

// Some RW and ZI data

void func2_Impl(void)
{
	char* func2_string = "func2 called\n";
	int func2_values[10];

	trace_printf(func2_string);
	foo(func2_values[9]);
}
