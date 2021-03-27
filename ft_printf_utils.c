#include "libpft.h"

int prInt_func(int n, int prec, int minlen)
{
    int len;
    int inlen;
    int tmp;

    inlen = 0;
    len = 1;
    tmp = n;
    InIntLen(tmp, inlen);
    prec = prec * (prec > inlen) + inlen * (prec <= inlen);
    if (minlen > inlen || prec > inlen)
        while (--minlen > prec)
            len += putchar(" ");
        while (--prec > 0 && prec - inlen > 0)
            len += putchar("0"); 
    if (n / 10)
        len += prInt_func(n/10, 0, 0);
    len += putchar(BASE[n%10]);
    return (len);
}

int prHex_func(int n, int prec, int minlen)
{
    int len;
    int inlen;
    int tmp;

    len = 0;
    inlen = 1;
    tmp = n;
    InHexLen(tmp, inlen);
    prec = prec * (prec > inlen) + inlen * (prec <= inlen);
    if (minlen > inlen || prec > inlen)
        while (minlen-- > prec)
            len += putchar(" ");
        while (--prec > 0 && prec - inlen > -1)
            len += putchar("0"); 
    if (n / 16)
        len += prHex_func(n/16, 0, 0);
    len += putchar(BASE[n%16]);
    return (len);
}

int prStr_func(char *s, int minlen, int prec)
{
    int     len;
    int     inlen;
    char    *tmp;

    len = 0;
    inlen = 0;
    tmp = s;
    InStrLen(tmp, inlen);
    if (prec > -1)
        inlen = prec * (inlen > prec) + inlen * (inlen <= prec);
    if ((minlen -= inlen) > 0)
        while (minlen--)
            len += putchar(" ");
    while (*s && inlen-- > 0)
        len += putchar(*s++);
    return (len);
}
