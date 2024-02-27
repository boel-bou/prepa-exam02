#include <unistd.h>

int check(char *str, char c, int pos)
{
    int i = 0;
    while (i < pos)
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        while (av[1][i])
        {
            int j = 0;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    if (check(av[1], av[1][i], i))
                        write(1, &av[1][i], 1);
                    break;
                }
                j++;
            }
            i++;
        }
    }
    write (1, "\n", 1);
}
