/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:39:28 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/18 14:58:19 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return (c + 32);
	else
		return (c);
}

// int main(int ac, char **argv)
// {
//     if (ac != 2)
//         return (0);
//     printf("%c\n", (char)ft_tolower(argv[1][0]));
//     return (0);
// }