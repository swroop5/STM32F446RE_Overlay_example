/* Basic overlay manager */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "diag/Trace.h"

#define NUM_OVERLAYS 2

#define FLASH_LOAD_ADDR_OFFSET	0x08001b60

/* RAM EXEC address offset */
#define RAM_EXEC_ADDR_OFFSET	0x20000000

typedef struct overlay_region_t_struct
{
void * load_ro_base;
void * load_ro_end;
} overlay_region_t;


int current_overlay = 0;


extern void * const code_base;
extern void * const entry_base;


extern const overlay_region_t overlay_regions[NUM_OVERLAYS];

//extern char __load_start_ovly0, __load_stop_ovly0;

void dl_manager_init()
{
//Do any initialisation if needed
}

void load_overlay(int n)
{
const overlay_region_t * selected_region;

if(n == current_overlay)
{
    //Already loaded requested module, return
    return;
}

/* boundary check */
if(n<1 || n>NUM_OVERLAYS)
{
    return;
}

/* load code overlay */
    //Copy requested module from FLASH to RAM
    //RAM Addrees = code_base
    //Flash Address = selected_region-&gt;load_ro_base
    //Length of data to be copied = (selected_region-&gt;load_ro_end - selected_region-&gt;load_ro_base)
/* Load the corresponding overlay */
	trace_printf("Loading overlay %d...\n", n);
	
	/* set selected region */
	selected_region = &overlay_regions[n-1];
	
	/* load code overlay */
	memcpy(code_base, (selected_region->load_ro_base), (selected_region->load_ro_end - selected_region->load_ro_base));

	//memcpy((char *) 0x20001000, selected_region->load_ro_base, (selected_region->load_ro_end - selected_region->load_ro_base));

	 // memcpy ((char *) 0x08400000, &__load_start_ovly0, &__load_stop_ovly0 - &__load_start_ovly0);
	
	/* load data overlay */
	//memcpy(data_base, selected_region->load_rw_base, (unsigned int)selected_region->exec_zi_base - (unsigned int)data_base);
	
	/* Comment out the next line if your overlays have any static ZI variables
	 * and should not be reinitialized each time, and move them out of the
	 * overlay region in your scatter file */
	//memset(selected_region->exec_zi_base, 0, selected_region->zi_length);

/* update record of current overlay */
current_overlay=n;
trace_printf("...Done.\n");

}

