/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamenny <kkamenny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:33:37 by kkamenny          #+#    #+#             */
/*   Updated: 2024/07/18 19:51:17 by kkamenny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (s < d && s + n > d)
	{
		d = d + n - 1;
		s = s + n - 1;
		while (n--)
			*(d--) = *(s--);
	}
	else
	{
		while (n--)
			*(d++) = *(s++);
	}
	return (dest);
}

// int main()
// {
// 	char source[] = "Hello, World!";
// 	char destination[] = "6789";

// 	ft_memmove(source, source + 5, 7);
// 	// memmove(source, source + 5, 7);
// 	printf("%s", source);
// 	return (0);
// }
