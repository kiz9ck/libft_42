/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamenny <kkamenny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:08:30 by kkamenny          #+#    #+#             */
/*   Updated: 2024/07/18 17:41:43 by kkamenny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	int_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		len = 1;
		n = -n;
	}
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

void	cpy_result(char *result, int n, size_t	len_n)
{
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	else if (n == 0)
		result[0] = '0';
	while (n > 0)
	{
		result[len_n - 1] = (n % 10) + '0';
		n = n / 10;
		len_n--;
	}
}

void	if_int_min(char *result)
{
	result[0] = '-';
	result[1] = '2';
	result[2] = '1';
	result[3] = '4';
	result[4] = '7';
	result[5] = '4';
	result[6] = '8';
	result[7] = '3';
	result[8] = '6';
	result[9] = '4';
	result[10] = '8';
}

char	*ft_itoa(int n)
{
	size_t	len_n;
	char	*result;

	if (n == INT_MIN)
	{
		result = (char *)malloc(12);
		if (result == NULL)
			return (NULL);
		result[11] = '\0';
		if_int_min(result);
	}
	else
	{
		len_n = int_len(n);
		result = (char *)malloc(len_n + 1);
		if (result == NULL)
			return (NULL);
		result[len_n] = '\0';
		cpy_result(result, n, len_n);
	}
	return (result);
}

// int	main()
// {
// 	int n = 23;
// 	char *result = ft_itoa(n);
// 	if (result != NULL)
// 	{
// 		printf("%s\n", result);
// 		free(result);
// 	}
// 	return (0);
// }
