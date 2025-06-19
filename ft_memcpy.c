/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:01:35 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/19 16:36:32 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*temp;
	const unsigned char	*temp2;

	if (!dest && !src)
		return (NULL);
	i = 0;
	temp = dest;
	temp2 = src;
	while (i < n)
	{
		temp[i] = temp2[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
//     char *src = "Hello World!";
//     char    dest[20];
//     unsigned char *temp = ft_memcpy(dest, src, strlen(src));
//     dest[strlen(src)] = '\0';
//     printf("%s\n", temp);
//     return (0);
// }
