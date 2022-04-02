# Dynamic Memory Allocation
## When assigning static size of array the memory may be insufficent in some cases or memory could go to waste.
- This is known as dynamic memory allocation in C programming.
- To solve this issue We can allocate memory manually during runtime.
- It's library functions are defined in STDLIB.H.
- Some of library Functions are:
    - calloc();
        - Defaults value to 0;
    - malloc();
        - Stands for memory allocation.
        - Reserves a block of memory of specified number of bytes and returns a pointer of void which can be casted into pointer any form.
        - `ptr=(*float)malloc(100*sizeof(float));`
        - The above statement allocates 400 bytes of memory. Its because the size of float is 4 bytes and pointer ptr holds the address of the first byte in the allocated memory. 
    - free();