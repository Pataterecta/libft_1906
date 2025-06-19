/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:42:36 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/18 16:52:31 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_mem;
	unsigned int	len;
	unsigned int	i;

	new_mem = NULL;
	if (s == 0 || f == 0)
		return (NULL);
	len = ft_strlen(s);
	new_mem = malloc(sizeof(char) * (len + 1));
	if (!new_mem)
		return (NULL);
	new_mem[len] = 0;
	i = 0;
	while (i < len)
	{
		new_mem[i] = f(i, s[i]);
		i++;
	}
	return (new_mem);
}
