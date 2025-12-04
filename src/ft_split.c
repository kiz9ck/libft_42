/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamenny <kkamenny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:34:23 by kkamenny          #+#    #+#             */
/*   Updated: 2024/07/17 19:48:37 by kkamenny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	words_count(char const *s, char c)
{
	size_t	count;
	int		a;

	a = 0;
	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!a)
			{
				count++;
				a = 1;
			}
		}
		else
			a = 0;
		s++;
	}
	return (count);
}

static char	*all_w(char const *start, char const *end)
{
	size_t	len;
	char	*res;
	size_t	i;

	i = 0;
	len = end - start;
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	while (i < len)
	{
		res[i] = start[i];
		i++;
	}
	res[len] = '\0';
	return (res);
}

static void	add_result(char **result, char const *s, char c)
{
	const char	*start;
	int			i;

	start = NULL;
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!start)
				start = s;
		}
		else if (start)
		{
			result[i++] = all_w(start, s);
			start = NULL;
		}
		s++;
	}
	if (start)
		result[i++] = all_w(start, s);
	result[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char		**result;

	if (s == NULL)
		return (NULL);
	result = (char **)malloc((words_count(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	add_result(result, s, c);
	return (result);
}

void	free_split(char **split_s)
{
	int	i;

	i = 0;
	while (split_s[i])
	{
		free(split_s[i]);
		i++;
	}
	free(split_s);
}

// int main()
// {
// 	char s[] = "Hi my name is 213";
// 	char c = ' ';
// 	char **result = ft_split(s, c);
// 	int i = 0;
// 	while (result[i] != NULL)
// 	{
// 		printf("%s \n", result[i]);
// 		i++;
// 	}
// 	free_split(result);
// 	return (0);
// }
