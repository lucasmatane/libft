/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassehairi <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 11:17:13 by lucasseha         #+#    #+#             */
/*   Updated: 2018/08/22 11:20:32 by lucasseha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *str1, char *str2)
{
	int i; 

	i = 0; 
	while(str1[i] == str2[i])
		i++; 
	return(str1[i] - str2[i]); 
}
