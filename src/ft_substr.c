/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamenny <kkamenny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:20:45 by kkamenny          #+#    #+#             */
/*   Updated: 2024/07/18 18:02:16 by kkamenny         ###   ########.fr       */
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

size_t	checking(size_t start, size_t len, size_t str_len)
{
	if (start + len > str_len)
		len = str_len - start;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	size_t	i;
	char	*substr;

	i = 0;
	str_len = s_len(s);
	if (start >= str_len)
	{
		substr = (char *)malloc(1);
		if (substr == NULL)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	len = checking(start, len, str_len);
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[len] = '\0';
	return (substr);
}

// int main() {
// 	const char *original = "Hello, world!";
// 	char *sub = ft_substr(original, 7, 5);

// 	if (sub != NULL)
// 	{
// 		printf("Original: %s\n", original);
// 		printf("Substring: %s\n", sub);
// 		free(sub);
// 	}
// 	else
// 	{
// 	printf("Memory allocation failed.\n");
// 	}

// 	return 0;
// }
