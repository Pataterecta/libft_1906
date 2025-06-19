/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:38:09 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/18 14:58:24 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return (c - 32);
	else
		return (c);
}

// int main(int ac, char **argv)
// {
//     if (ac != 2)
//         return (0);
//     printf("%c\n", (char)ft_toupper(argv[1][0]));
//     return (0);
// }