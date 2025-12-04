/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamenny <kkamenny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 13:24:14 by kkamenny          #+#    #+#             */
/*   Updated: 2024/07/17 17:41:37 by kkamenny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*pam1;
	const unsigned char	*pam2;
	size_t				i;

	pam1 = (const unsigned char *)s1;
	pam2 = (const unsigned char *)s2;
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			if (pam1[i] != pam2[i])
			{
				return (pam1[i] - pam2[i]);
			}
			i++;
		}
	}
	return (0);
}

// int	main()
// {
// 	char	primer1[] = "I have Iphone";
// 	char	primer2[] = "I have Android";
// 	int		result = ft_memcmp(primer1, primer2, 6);
// 	printf("%d", result);
// 	return (0);
// }
