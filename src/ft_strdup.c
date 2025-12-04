/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamenny <kkamenny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:32:41 by kkamenny          #+#    #+#             */
/*   Updated: 2024/07/18 20:24:45 by kkamenny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	size_t	i;
	char	*dup;

	i = 0;
	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	dup = malloc(s_len + 1);
	if (dup == NULL)
		return (NULL);
	while (i < s_len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[s_len] = '\0';
	return (dup);
}

// int	main()
// {
// 	const char *s = "123456789";
// 	char *dup = ft_strdup(s);
// 	printf("Original: %s\n", s);
// 	printf("Duplicate: %s\n", dup);
// 	return (0);
// }
