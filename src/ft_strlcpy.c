/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamenny <kkamenny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:49:11 by kkamenny          #+#    #+#             */
/*   Updated: 2024/07/17 17:42:28 by kkamenny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		num;
	size_t		src_size;

	num = 0;
	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	if (size > 0)
	{
		while (num < size - 1 && src[num] != '\0')
		{
			dest[num] = src[num];
			num++;
		}
		dest[num] = '\0';
	}
	return (src_size);
}

// int main() {
//     char dest[20];
//     const char *src = "Hello, World!";
//     size_t result;

// 	result = ft_strlcpy(dest, src, 14);
// 	printf("%s \n", src);
// 	printf("%s \n", dest);
// 	printf("%zu \n\n", result);
//  return 0;
// }
