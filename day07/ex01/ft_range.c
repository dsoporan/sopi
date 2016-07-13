/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 18:41:04 by dsoporan          #+#    #+#             */
/*   Updated: 2016/07/13 20:10:23 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_range(int min, int max)
{
	int i;
	int j;
	int *nn;

	i = min;
	j = 0;
	if (min >= max)
		return (0);
	nn = (int *)malloc(sizeof(int) * (max - min + 1));
	if (!nn)
		return (0);
	while (i < max)
	{
		nn[j] = i;
		i++;
		j++;
	}
	return (nn);
}
