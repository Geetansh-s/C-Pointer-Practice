/*
    Dangling pointers are pointers that stil point to memory even after we have freed it 
    It can cause weird shit in embedded systems
    We need to set the pointer to NULL after free()


    Double free can also cause corruption of data
    When we free a memory region and then again call free on the same memory block, the data regions can overlap and data gets corrupted

    If we store more data than allocated memory, it would cause errors such that it's hard to trace even on runtime
    It tends to reallocate that much more memory and it can interfere with the memory some other code is using

*/