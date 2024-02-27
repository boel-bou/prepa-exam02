#include <unistd.h>
#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;	

	if (a == 0 || b == 0)
		return (0);
	if (a == b)
		return (b);
	int div1 = 0;
    int i = 1;
    int n1 = a;
    int n2 = b;
    if (a > b)
        n1 = b;
    if ( a > b)
        n2 = a;
    while (i <= n1)
    {
        if (n1 % i == 0)
            div1 = i;
        i++;
    }
    int div2 = 0;
    i = 1;
    while (i <= n2)
    {
        if (n2 % i == 0)
            div2 = i;
        if (div2 == div1)
            break;
        i++;
    }
    if (div1 == div2)
        return ((a * b)/ div1);
    else
        return (a*b);
}

#include <stdio.h>

int main()
{
    printf("%u\n", lcm(130, 9));  
}