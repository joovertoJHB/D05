/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooverto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:25:25 by jooverto          #+#    #+#             */
/*   Updated: 2020/07/17 11:23:29 by jooverto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		copy;

	copy = 0;
	while(src[copy] != '\0' && copy < n)
	{
		dest[i] = src [i];
		copy++;
	}
	if(i < n)
	{
		dest[i] = '\0';
		copy++;
	}
	return(dest);
}

