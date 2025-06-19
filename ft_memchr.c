/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:34:58 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/19 12:44:41 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	value;
	size_t			i;

	str = (unsigned char *)s;
	value = c;
	i = 0;
	while (i < n)
	{
		if (str[i] == value)
			return ((char *) &str[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	const void *s = "abcdefg";
// 	int c = 'c';
// 	char *copy;
// 	copy = ft_memchr(s, c, 5);
// 	printf("%s\n", copy);
// 	return (0);
// }