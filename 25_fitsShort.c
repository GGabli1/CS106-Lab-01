#include <stdio.h>

/* 
 * fitsShort - return 1 if x can be represented as a 
 *   16-bit, two's complement integer.
 *   Examples: fitsShort(33000) = 0, fitsShort(-32768) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 1
 */
int fitsShort(int x)
{
    //max range of short is 32767
    //min range of short is -32768
    //Tmax 0x00007FFF
    //Tmin = ~Tmax
    //whenever the upper 17 bits are the same, the int can fit in short


    return !((x >> 16) ^  (x >> 15));
}

int test_fitsShort(int x)
{
    short int sx = (short int) x;
    return x == sx;
}

int main(void)
{
    int x = 0xFFFF8000 - 1;
    printf("expected: %x\n", fitsShort(x));
    printf("actual  : %x\n", test_fitsShort(x));
}
