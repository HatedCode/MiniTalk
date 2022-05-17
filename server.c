#include    <unistd.h>
#include    <stdlib.h>
#include    <stdio.h>
#include    <signal.h>
#include    <ft_printf.h>

typedef struct s_message
{
    char    c;
    size_t  i;
    t_message;
}

t_message   g_msg;

void    bit_handler(int bit)
{
    int i;

    i = 0;
    g_msg.c += ((bit & 1) << g_msg.i);
    g_msg.i++;
    if  (g_msg.i == 7)
    {
        ft_printf("%c", g_msg.c);
        if (!g_msg.c)
            ft_printf("%c", g_msg.c);
        g_msg.c = 0;
        g_msg.i = 0;
    }
}

intmain(void)
{
    ft_printf("Welcome To My Server!\n");
    ft_printf("My Server PID is: %d\n", getpid());
    while (1)
    {
        signal(SIGUSR2, bit_handler);
        signal(SIGUSR1, bit_handler);
        pause();
    }
    return (0);
}