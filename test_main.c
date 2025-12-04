#include "libft.h"
#include <stdio.h>

int main(void)
{
    // Тестируем ft_strlen
    char *str = "Hello SAP";
    printf("Original strlen: 9\n");
    printf("My ft_strlen: %d", ft_strlen(str));

    // Тестируем ft_putstr_fd
    ft_putstr_fd("\nTest output to FD 1\n", 1);

    return (0);
}