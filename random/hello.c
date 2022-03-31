#include <stdio.h>
#include <stdint.h>

int main()
{
//     uint64_t dx = 0x77E435B08;
//     while (dx) {
//         putchar(0x726F6C6564574820 >> (((dx >>= 3) & 7) << 3) & 0xFF);
//     }
// }
    int idx[] = {1, 4, 5, 5, 6, 0, 2, 6, 7, 5, 3, -1};
    for (int *i = idx; *i>-1 ; i++)
    {
        fputc(" HWdelor"[*i], stdout);
    }
}