#include "21400776.h"
#include<stdlib.h>

int reverse_digits(int n) {
	int reverse = 0;

	while (n != 0)
	{
		reverse = reverse * 10;
		reverse = reverse + n % 10;
		n = n / 10;
	}

	return reverse;
}

boolean isprime(int n){
	int i = 0;
	if(n == 1 || n<0){
		return FALSE;
	} // Prime number is 1 and itself are mod

	for (i = 2; i<= (n/2); i++)
	{
		if(n % i == 0)
		{
			return FALSE;
		}
	}
	return TRUE;
}

