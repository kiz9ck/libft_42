/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamenny <kkamenny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:59:12 by kkamenny          #+#    #+#             */
/*   Updated: 2024/07/17 17:41:48 by kkamenny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		*ptr++ = (unsigned char)c;
	}
	return (s);
}
/*
int main()
{
	char arrr[13];
	char *f = ft_memset(arrr, '@', sizeof(arrr));
	char *g = memset(arrr, '@', sizeof(arrr));
	printf("%s\n", f);
	printf("%s", g);
	return 0;
}
*/
