#include <stdio.h>
#include "libpft.h"

int main()
{
    printf("s| %s %.s %.12s %12.s %12.1s %1.12s %12.12s\n", "asd", "asd", "asd", "asd", "asd", "asd", "asd");
    ft_printf("s| %s %.s %.12s %12.s %12.1s %1.12s %12.12s\n", "asd", "asd", "asd", "asd", "asd", "asd", "asd");
    printf("d| %d %.d %.12d %12.d %12.1d %1.12d %12.12d\n", 12, 12, 12, 12, 12, 12, 12);
    ft_printf("d| %d %.d %.12d %12.d %12.1d %1.12d %12.12d\n", 12, 12, 12, 12, 12, 12, 12);
    printf("x| %x %.x %.12x %12.x %12.1x %1.12x %12.12x\n", 27, 27, 27, 27, 27, 27, 27);
    ft_printf("x| %x %.x %.12x %12.x %12.1x %1.12x %12.12x\n", 27, 27, 27, 27, 27, 27, 27);
}
