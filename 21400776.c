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