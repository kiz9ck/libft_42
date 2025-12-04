/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamenny <kkamenny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:10:15 by kkamenny          #+#    #+#             */
/*   Updated: 2024/08/15 15:49:10 by kkamenny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		*str++ = 0;
	}
}

// int main()
// {
// 	char arrr[10];

// 	ft_bzero(arrr, sizeof(arrr));
// 	size_t i = 0;
// 	while (i < sizeof(arrr)) {
// 		printf("%d ", arrr[i]);
// 		i++;
// 	}
// 	return (0);
// }
