/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamenny <kkamenny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 19:13:26 by kkamenny          #+#    #+#             */
/*   Updated: 2024/07/17 17:42:48 by kkamenny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*end;

	end = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			end = s;
		}
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)end);
}

// int main()
// {
// 	const char *proba = "qwertyuotyuoty";
// 	char *g = ft_strrchr(proba, 'q');
// 	printf("%s", g);
// 	return (0);
// }
