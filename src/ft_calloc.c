/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamenny <kkamenny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:03:04 by kkamenny          #+#    #+#             */
/*   Updated: 2024/08/15 15:49:01 by kkamenny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	total_size;
	void	*result;

	i = 0;
	total_size = nmemb * size;
	result = malloc(total_size);
	if (result == NULL)
		return (NULL);
	while (i < total_size)
	{
		((unsigned char *)result)[i] = 0;
		i++;
	}
	return (result);
}

// int	main()
// {
// 	int *primer = (int *)ft_calloc(10, sizeof(int));
// 	int i = 0;
// 	while(i < 10)
// 	{
// 		printf("%d ", primer[i]);
// 		i++;
// 	}
// 	return (0);
// }
