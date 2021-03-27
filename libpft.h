#ifndef LIBPFT_H
# define LIBPFT_H
# include <stdarg.h>
# include <unistd.h>

# define putchar(n)                  write(1, &n, 1)
# define BASE                        "0123456789abcdef"
# define simple_atoi(line, minlen)   while (*line < 58 && *line > 47)\
                                    {\
                                        minlen = minlen * 10 + *line - 48;\
                                        line += 1;\
                                    }
# define InStrLen(line, inlen)    while(*line++)\
                                        inlen++
# define InHexLen(line, inlen)    while(line /= 16)\
                                        inlen++
# define InIntLen(line, inlen)    while(line /= 10)\
                                        inlen++

 int    prInt_func(int n, int prec, int minlen);
 int    prHex_func(int n, int prec, int minlen);
 int    prStr_func(char *s, int minlen, int prec);
 int    print_func(char **line, va_list arg, int prec, int minlen);
 int    parse_func(char **line, va_list arg);
 int    ft_printf(const char *fmt, ...);

#endif
