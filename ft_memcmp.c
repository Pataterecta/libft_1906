/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 18:22:33 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/18 15:01:17 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1)
	{
		if (temp1[i] != temp2[i])
			break ;
		i++;
	}
	return (temp1[i] - temp2[i]);
}

// int main(void)
// {
//     const void *s1 = "abcdef";
//     const void *s2 = "abcfff";
//     size_t  n = 5;
//     printf("%d\n", memcmp(s1, s2, n));
//     printf("%d\n", ft_memcmp(s1, s2, n));
//     return (0);
// }