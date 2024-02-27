
#include <unistd.h>

void    print_bits(unsigned char octet)
{
    int i;
    int div;

    div = 128;
    i = octet;

   while (div != 0)
   {
        if (div <= i)
        {
            write(1, "1", 1);
            i = i % div;
        }
        else
            write(1, "0", 1);
        div = div / 2;
   }
}
