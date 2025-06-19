/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:42:20 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/19 16:21:15 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	res;
	void	*ptr;

	res = nmemb * size;
	ptr = malloc(res);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, res);
	return (ptr);
}

// int main(void)
// {
//     int *arr = ft_calloc(5, sizeof(int));
//     for (int i = 0; i < 5; i++)
//         printf("arr[%d] = %d\n", i, arr[i]);
//     return (0);
// }