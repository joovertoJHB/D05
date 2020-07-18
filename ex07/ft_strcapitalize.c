/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooverto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 10:44:41 by jooverto          #+#    #+#             */
/*   Updated: 2020/07/17 17:01:20 by jooverto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int		i;
	
	i = 0;
	while(str[i] != '\0')
	{
	
		if(str[(i = 0)] && (str[i] >= 'a' || str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			i++;
		}	

		else if(str[i] == ' ' && (str[i] >= 'a' || str[i] <= 'z'))
		{	
			i++;
			str[i] = str[i] - 32;
		}
		i++;
	}
	return(str);
}

int			main()
{
	char a[] = "td kjgh";

	printf("%s", ft_strcapitalize(a));
	return (0);	
}
