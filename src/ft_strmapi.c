/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamenny <kkamenny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:07:11 by kkamenny          #+#    #+#             */
/*   Updated: 2024/07/18 18:02:28 by kkamenny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	s_len(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	size_t			len;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = s_len(s);
	i = 0;
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}

// char	to_uppercase(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (c >= 'a' && c <= 'z') ? (c - 32) : c;
// 	return (c);
// }
// int	main()
// {
// 	char const s[] = "i want pizza";
// 	char *result = ft_strmapi(s, to_uppercase);
// 	printf("%s \n", result);
// 	return (0);
// }
