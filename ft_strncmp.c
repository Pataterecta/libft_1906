/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 16:38:02 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/18 17:53:15 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*news1;
	unsigned char	*news2;

	i = 0;
	news1 = (unsigned char *)s1;
	news2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (news1[i] != '\0' && news2[i] != '\0' && (i < n - 1))
	{
		if (news1[i] != news2[i])
			break ;
		i++;
	}
	return (news1[i] - news2[i]);
}

// int main(void)
// {
//     const char *s1 = "abcdef";
//     const char  *s2 = "abcfff";
//     size_t  n = 5;
//     printf("%d\n", strncmp(s1, s2, n));
//     printf("%d\n", ft_strncmp(s1, s2, n));
//     return (0);
// }