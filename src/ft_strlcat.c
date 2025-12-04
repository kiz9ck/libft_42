/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamenny <kkamenny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:51:29 by kkamenny          #+#    #+#             */
/*   Updated: 2024/07/17 18:46:57 by kkamenny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	num;
	size_t	dst_size;
	size_t	src_size;

	dst_size = 0;
	src_size = 0;
	while ((dst[dst_size] != '\0') && (dst_size < size))
		dst_size++;
	while (src[src_size] != '\0')
		src_size++;
	num = 0;
	if (dst_size == size)
		return (size + src_size);
	while (src [num] != '\0' && dst_size + num < size - 1)
	{
		dst[dst_size + num] = src[num];
		num++;
	}
	if (dst_size + num < size)
		dst[dst_size + num] = '\0';
	return (src_size + dst_size);
}

// int main()
// {
// 	char src[] = " Wold";
// 	char dest[100] = "Hello";
// 	size_t total = ft_strlcat(dest, src, 10);
// 	printf("%s \n", src);
// 	printf("%s \n", dest);
// 	printf("%zu", total);
// 	return (0);
// }
