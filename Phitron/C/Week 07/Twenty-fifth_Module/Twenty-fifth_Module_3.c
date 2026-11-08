#include <stdio.h>

int main()
{
    return 0;
}

/*
int 12 -> 00001010

0 -> positive
1 -> negative

12 -> 00001010
-12 -> 10001010

0 -> 00000000
-0 -> 10000000

12        -> 00001010
1's com   -> 11110101 +
2's com   -> 11110110

256 ->  2^8
        876543210
256 ->  100000000

unsigned int ->
char -> 1 byte -> 8  bit (0 to 2^8 - 1) (0 - 255)
int -> 4 bytes -> 32 bit (0 to 2^32 - 1)

signed int ->
char -> 1 byte -> 8  bit (-2^7 to 2^7 - 1)
int -> 4 bytes -> 32 bit (-2^31 to 2^31 - 1)

8 bit -> byte
*/
