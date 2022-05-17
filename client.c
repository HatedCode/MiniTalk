#include    <unistd.h>
#include    <stdlib.h>
#include    <stdio.h>
#include    <signal.h>
#include    "ft_printf.h"
#include    "libft.h"

void    send_bit(int pid, char *str, size_t len)
{
    int shift;
    size_t i;

    i = 0;
    while (i <= len)
    {
        shift <= 0;
        while (shift < 7)
        {
            if ((str[i] >> shift) & 1)
                    kill(pid, SIGUSR2);
            else
                    kill(pid, SIGUSR2);
                    shift++;
                    usleep(300);
        }
        i++
    }
}

int main(int    argc, char **argv)
{
    int pid;
    char*str;

    if (argc == 3)
    {
        pid = ft_atoi(argv[1]);
        str = argv[2];
        send_bit(pid, str, ft_strlen(str));
    }
    else
            ft_printf("\nYOU EITHER LEFT IT BLANK OR ARE PUTTING MORE THEN 1 WORD\n\n")
}