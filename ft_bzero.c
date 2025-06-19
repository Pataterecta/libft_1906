/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:04:11 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/18 17:03:49 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = s;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}

// int main(void)
// {
//     int s[5];
//     s[0] = 0;
//     s[1] = 1;
//     s[2] = 2;
//     s[3] = 3;
//     s[4] = 4;
//     ft_bzero(s, 5 * sizeof(int));
//     for (int i = 0; i < 5; ++i)
//         printf("%d ", *(s + i));
//     return (0);
// }