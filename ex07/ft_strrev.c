/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogazide <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:50:46 by nogazide          #+#    #+#             */
/*   Updated: 2020/07/16 10:51:46 by nogazide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char *ft_strrev(char *str)
{
	int		length;
	length = sizeof(str);

	while(str[length] != '\0')
	{
		length--;
	}
	return(str);
