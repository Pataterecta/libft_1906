/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:37:01 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/18 16:37:02 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new_s;
	unsigned int	i;
	unsigned int	j;
	int				len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_s = malloc(sizeof(char) * len);
	if (new_s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		new_s[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new_s[i + j] = s2[j];
		j++;
	}
	new_s[i + j] = '\0';
	return (new_s);
}
