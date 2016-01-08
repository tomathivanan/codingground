#include<stdio.h>
#if 0
main()
{
    
int i=5;
printf("\r\na%d-b%d-c%d-d%d-e%d\r\n", i++, i--, ++i, --i, i);

}

#endif

/* The arguments in any function call are pushed into the stack from left to right order. 
During evaluation those arguments are popped out from the stack. 
So, ultimately. the evaluation is from right to left. So, the last argument will result 5, 
the next one will result 4 and also the variable i at that point will hold 4. 
The next one is again 5 and after that it is again 5 as it is post decrement. 
The first one will return 4 and turn the value of i to 5.
*/