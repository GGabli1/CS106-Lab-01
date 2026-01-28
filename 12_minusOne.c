#include <stdio.h>

/* 
 * minusOne - return a value of -1 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 2
 *   Rating: 1
 */
int minusOne(void)
{
    //return 0xFFFFFFFF;
    //return ~0 is also correct
    return (1 << 31) >> 31;
}

int test_minusOne(void)
{
    return -1;
}

int main(void)
{
    printf("expected: %x\n", minusOne());
    printf("actual  : %x\n", test_minusOne());
}
