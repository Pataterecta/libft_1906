/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:30:56 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/19 16:34:47 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	unsigned char	*ptr;
	const char		*srcsrc;

	if (!dest && !src)
		return (NULL);
	ptr = dest;
	temp = ptr;
	srcsrc = src;
	if (dest <= src)
	{
		while (n--)
		{
			*temp++ = *srcsrc++;
		}
	}
	else if (dest > src)
	{
		temp += n;
		srcsrc += n;
		while (n--)
			*(--temp) = *(--srcsrc);
	}
	return (dest);
}
