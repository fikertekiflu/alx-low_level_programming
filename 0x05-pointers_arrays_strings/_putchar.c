#include "main.h"
#include <unistd.h>
/**
 * _putchar - -writes the charatcter c to stdout
 * @c: the character to print
 *
 * Return:on sucess 1.
 * on error, -1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
