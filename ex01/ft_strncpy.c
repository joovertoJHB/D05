/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooverto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:25:25 by jooverto          #+#    #+#             */
/*   Updated: 2020/07/16 14:59:38 by jooverto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		copy;

	copy = 0;
	while(copy <= n)
	{
		dest[copy] = src[copy];
		copy++;
	}
	return(dest);
}

