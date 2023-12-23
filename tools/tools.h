//
// Created by mariomang on 12/23/23.
//

#ifndef FAKER_STANDARD_TOOLS_H
#define FAKER_STANDARD_TOOLS_H

void swap_int(int *a, int *b);

void swap_short(short *a, short *b);

void swap_long(long *a, long *b);

void swap_llong(long long *a, long long *b);

void swap_ushort(unsigned short *a, unsigned short *b);

void swap_uint(unsigned int *a, unsigned int *b);

void swap_ulong(unsigned long *a, unsigned long *b);

void swap_ullong(unsigned long long *a, unsigned long long *b);

void swap_float(float *a, float *b);

void swap_double(double *a, double *b);

void swap_char(char *a, char *b);

#define swap(a, b) _Generic((a, b), \
                    int *: swap_int, \
                    short *: swap_short, \
                    long *: swap_long, \
                    long long *: swap_llong, \
                    float *: swap_float, \
                    double *: swap_double,   \
                    char *: swap_char,   \
                    unsigned short : swap_ushort, \
                    unsigned int: swap_uint, \
                    unsigned long: swap_ulong,    \
                    unsigned long long: swap_ullong, \
                    default: swap_int \
)(a,b)


#endif //FAKER_STANDARD_TOOLS_H
