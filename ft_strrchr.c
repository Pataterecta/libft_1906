/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 16:18:07 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/18 17:43:53 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i >= 0)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s--;
		i--;
	}
	return (NULL);
}

// int main(void)
// {
//     const char *s = "abcdefgc";
//     int c = 'c';
//     printf("%s\n", ft_strrchr(s, c));
//     return (0);
// }