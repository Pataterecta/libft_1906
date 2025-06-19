/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:40:15 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/19 13:03:53 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int c)
{
	int			len;
	char		*temp;
	int			i;
	long long	n;

	i = 0;
	len = ft_len(c);
	n = c;
	temp = malloc (sizeof(char) * len + 1);
	if (temp == NULL)
		return (NULL);
	if (n < 0)
	{
		temp[0] = '-';
		n = -n;
		i++;
	}
	temp[len--] = '\0';
	while (len >= i)
	{
		temp[len] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (temp);
}
