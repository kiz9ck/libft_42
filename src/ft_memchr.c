/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamenny <kkamenny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:40:15 by kkamenny          #+#    #+#             */
/*   Updated: 2024/08/15 15:48:18 by kkamenny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*a;
	size_t				i;

	a = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
		{
			return ((void *)(a + i));
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char primer[] = "Rizz";
// 	char i = 'i';
// 	char *result = (char *)ft_memchr(primer, i, sizeof(primer));
// 	printf("%s", result);
// 	return (0);
// }
