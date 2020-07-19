ENTRY(Reset_Handler)

MEMORY
{
  RAM    (xrw)   : ORIGIN = 0x20000000,   LENGTH = 64K
  ROM    (rx)    : ORIGIN = 0x8000000,    LENGTH = 512K
}

__max_heap_size = 0x400;    /* A symbol decleration. Not a variable */
__max_stack_size = 0x200;    /* A symbol decleration. Not a variable */    

SECTIONS
{
    .text :
    {
        *(.isr_vector)
        *(.text)
        *(.rodata)
        . = ALIGN(4);
        _etext = .;     /* Store the updated location counter in to a symnol '_etext'*/ 
    }> ROM
    
    .data :
    {
        _sdata = .;     /* Store the updated location counter in to a symnol '_sdata'*/ 
        *(.data)
        . = ALIGN(4);
        _edata = .;     /* Store the updated location counter in to a symnol '_edata'*/  
    }>RAM AT> ROM

    .bss :
    {   
        _sbss = .;      /* Store the updated location counter in to a symnol '_sbss'*/
        *(.bss)
        . = ALIGN(4);
        _ebss = .;       /* Store the updated location counter in to a symnol '_ebss'*/
    }>RAM 
}
