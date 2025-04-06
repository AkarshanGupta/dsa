// 1. Uninitialized pointer
int* ptr;           // Dangerous: contains random address
*ptr = 42;         // Bug: writing to random memory

// 2. Memory leak
int* ptr = new int;
ptr = nullptr;      // Memory leak: lost address before deleting

// 3. Dangling pointer
int* ptr = new int;
delete ptr;         // Memory freed
*ptr = 42;         // Bug: accessing freed memory

// 4. Double delete
int* ptr = new int;
delete ptr;
delete ptr;         // Bug: memory already freed