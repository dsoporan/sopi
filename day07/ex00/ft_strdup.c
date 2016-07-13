/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 14:37:29 by dsoporan          #+#    #+#             */
/*   Updated: 2016/07/13 18:40:38 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char *s;
	int i;

	i = 0;
	if(!src)
		return (0);
	s = (char *) malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (!s)
		return (0);
	while (i < ft_strlen(src))
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);

}
