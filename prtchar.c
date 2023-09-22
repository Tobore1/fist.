#include "main.h"
/* this a code for the putchar. but i renamed it prtchar 
 * */
int prtchar (char c)
{
	return (write(1, &c, 1));
}
	
