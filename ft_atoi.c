/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:06:37 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/18 17:56:35 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	minus;
	int	result;

	i = 0;
	result = 0;
	minus = 1;
	while (nptr[i] == ' ' || nptr[i] == '\r' || nptr[i] == '\f'
		|| nptr[i] == '\t' || nptr[i] == '\v' || nptr[i] == '\n')
	{
		i++;
	}
	if (nptr[i] != '\0' && (nptr[i] == '-' || nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			minus = -1;
		i++;
	}
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * minus);
}

// int	main(void)
// {
// 	printf("%d\n", atoi("-1234"));
// 	printf("%d\n", ft_atoi("-1234"));
// 	return (0);
// }
