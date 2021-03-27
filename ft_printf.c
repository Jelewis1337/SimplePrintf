#include "libpft.h"

int ft_printf(const char *fmt, ...)
{
    int     len;
    char    *line;
    va_list arg;

    len = 0;
    va_start(arg, fmt);
    line = (char*)fmt;
    while (*line)
    {
        while (*line != '%' && *line)
            len += putchar(*line++);
        if (*line == '%')
        {
            line++;
            len += parse_func(&line, arg);
            line++;
        }
    }
    return (len);
}
