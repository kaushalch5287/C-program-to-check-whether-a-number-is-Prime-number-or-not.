/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int
main ()
{
  int i, num, isPrime;
  isPrime = 1;
  printf ("Enter any number to check prime: ");
  scanf ("%d", &num);
  for (i = 2; i <= num / 2; i++)
    {
      if (num % i == 0)
	{
	  isPrime = 0;
	  break;
	}
    }
  if (isPrime == 1 && num > 1)
    {
      printf ("%d is prime number", num);
    }
  else
    {
      printf ("%d is composite number", num);
    }
  return 0;
}
