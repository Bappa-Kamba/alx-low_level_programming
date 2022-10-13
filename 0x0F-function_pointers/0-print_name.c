#include "function_pointers.h"

/**
  * print_name - prints the name paseed as a string
  *
  * @name: name to be printed
  * @f: function pointer to this function
  *
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
