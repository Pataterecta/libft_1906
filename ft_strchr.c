/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:34:28 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/18 15:02:34 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*temp;

	temp = (char *)s;
	while (*temp != '\0')
	{
		if ((unsigned char)c == *temp)
			return (temp);
		temp++;
	}
	if ((unsigned char)c == *temp)
		return (temp);
	return (NULL);
}

// int main(void)
// {
//     const char *s = "happycat";
//     int c = 'p';
//     char *news = ft_strchr(s, c);
//     printf("%s\n", news);
//     return (0);
// }
// int main(void)
// {
//     const char *s = "happycat";
//     int c = -1;
//     char *news = strchr(s, c);
//     printf("%s\n", news);
//     return (0);
// }