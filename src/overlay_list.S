.cpu cortex-m4
.code 16

@ Symbols to export

.global code_base
.data
.align 2
.type code_base, %object
.size code_base, 4

@ Common base execution addresses of the two OVERLAY regions

code_base:
.word __code_base
.global overlay_regions
.align 2
.type overlay_regions, %object
.size overlay_regions, 16

@ Array of details for each region -

@ see overlay_manager.c for structure layout

overlay_regions:

@ overlay 1

.word   __load_start_MODULE_ONE

.word   __load_stop_MODULE_ONE
@ overlay 2
.word   __load_start_MODULE_TWO

.word   __load_stop_MODULE_TWO
