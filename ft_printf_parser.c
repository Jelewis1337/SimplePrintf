#include "libpft.h"

int print_func(char **line, va_list arg, int prec, int minlen)
{
    int     len;

    len = 0;
    if (**line == 'd')
        len += prInt_func(va_arg(arg, int), prec, minlen);
    if (**line == 'x')
        len += prHex_func(va_arg(arg, int), prec, minlen);
    if (**line == 's')
        len += prStr_func(va_arg(arg, char*), minlen, prec);
    return(len);
}

int parse_func(char **line, va_list arg)
{
    int len;
    int minlen;
    int prec;

    len = 0;
    minlen = 0;
    prec = -1;
    simple_atoi(*line, minlen);
    if (**line == '.')
        prec = 0;
    *line += (**line == '.');
    simple_atoi(*line, prec);
    len += print_func(line, arg, prec, minlen);
    return (len);
}
