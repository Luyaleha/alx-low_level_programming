#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string used for separation
 * @n: variable number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ag;
unsigned int i;
if (n > 0)
{
va_start(ag, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ag, int));
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(ag);
}
printf("\n");
}
