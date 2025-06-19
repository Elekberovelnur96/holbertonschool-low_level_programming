#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: The characther to be checked .
 *
 * Returun:1if c is a latter,lowercase or uppercase ,0 otherwise.
 */
 
int _isalpha(int c)
{ 
	if(( c >= 'a' && c <= 'z') || (c >= 'A' && c<= 'Z'))
	       return (1);
	return(0);
}
