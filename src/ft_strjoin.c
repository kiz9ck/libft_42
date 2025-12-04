/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamenny <kkamenny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:26:55 by kkamenny          #+#    #+#             */
/*   Updated: 2024/07/17 17:42:22 by kkamenny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_count(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*concatenation(char const *s1, char const *s2, char *result)
{
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;

	i = 0;
	s1_len = len_count(s1);
	s2_len = len_count(s2);
	while (i < s1_len)
	{
		result[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < s2_len)
	{
		result[s1_len + i] = s2[i];
		i++;
	}
	result[s1_len + s2_len] = '\0';
	return (result);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	result = (char *)malloc(len_count(s1) + len_count(s2) + 1);
	if (result == NULL)
		return (NULL);
	result = concatenation(s1, s2, result);
	return (result);
}

// int main()
// {
// 	const char *str1 = "Hello, ";
// 	const char *str2 = "world!";
// 	char *joined = ft_strjoin(str1, str2);

// 	if (joined != NULL) {
// 		printf("Joined string: %s\n", joined);
// 	free(joined);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// }
