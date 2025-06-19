/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:00:10 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/18 15:00:09 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = s;
	while (i < n)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main(void)
// {
//     int s[5];
//     s[0] = 0;
//     s[1] = 1;
//     s[2] = 2;
//     s[3] = 3;
//     s[4] = 4;
//     ft_memset(s, 0, 3 * sizeof(int));
//     for (int i = 0; i < 5; ++i)
//         printf("%d ", *(s + i));
//     return (0);
// }
// int main(void)
// {
//     void    *s;
//     char    str[4] = "abc";
//     s = str;
//     int c = 'a';
//     size_t  n = 4; // undefined behavior, OR go mannually null-terminate
//     memset(s, c, n);
//     printf("%s\n", (char *)s);
//     return (0);
// }
// int main(void)
// {
//     char    str[7] = "123456";
//     int c = 'Z';
//     size_t  n = 3;
//     memset(str, c, n); // equivalent to memset(&str[0], c, n)
//     printf("%s\n", str);
//     return (0);
// }