/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamenny <kkamenny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:57:37 by kkamenny          #+#    #+#             */
/*   Updated: 2024/07/18 18:01:57 by kkamenny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	s_len(const char *s1)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

int	comparing(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*copy_str(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*find_start(char const *s1, char const *set)
{
	char	*start;

	start = (char *)s1;
	while (*start && comparing(*start, set))
		start++;
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;
	char		*result;
	size_t		len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = find_start(s1, set);
	if (*start == '\0')
	{
		result = (char *)malloc(1);
		if (result == NULL)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	end = s1 + s_len(s1) - 1;
	while (end > start && comparing(*end, set))
		end--;
	len = end - start + 1;
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	copy_str(result, start, len);
	return (result);
}

// int main()
// {
// 	char const s1[] = "  i like drink beer  ";
// 	char const set[] = "  ";
// 	char *result = ft_strtrim(s1, set);
// 	printf("%s", result);
// 	return (0);
// }
