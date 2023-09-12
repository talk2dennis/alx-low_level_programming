#include "main.h"

/**
 * jack_bauer - a function that prints that prints
 * every minute from 00:00 to 23:59
 *
 * Return: Always returns void
 */

void times_table(void)
{
  int i, j, result;
  for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            result = i * j;
            if (result >= 10) {
                putchar('0' + (result / 10));
                putchar('0' + (result % 10));
            }
            else
            {
            putchar('0' + result);
            }
            
            if (j < 9) {
                putchar(',');
                if (result < 10) {
                    putchar(' ');
                    putchar(' ');
                } else {
                    putchar(' ');
                }
            } else {
                putchar('\n');
            }
        }
    }
}
