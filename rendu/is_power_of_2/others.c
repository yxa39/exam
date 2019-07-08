#include <stdio.h>
/*
** first the basic function
*/

int		is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0) // or alternatively (!(n % 2))
		n /= 2;
	return ((n == 1) ? 1 : 0); // equivalent to : if (n == 1) return 1; else return (0);
}

/*
** Now the bitwise version :
** we apply n - 1 mask to n, and then check that is equal to 0
** it will be true for all numbers that are power of 2.
** Lastly we make sure that n is superior to 0.
*/

int	main(int ac, char **av)
{
	printf("result: %d\n",is_power_of_2(1));
    return (0);
}
