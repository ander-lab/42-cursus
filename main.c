/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 18:19:18 by ajimenez          #+#    #+#             */
/*   Updated: 2021/08/01 18:30:11 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *********************************MAIN************************************* */


#include "libft.h"
#include <string.h>
#include <ctype.h>

int	main(void)
{
/* ******************************isalpha************************************* */
	printf("------------isalpha------------\n");
	printf("------------isalpha_original---\n");
	char alpha_c;
    alpha_c = 'Q';
    printf("\nResult mayus: %d", isalpha(alpha_c));

    alpha_c = 'q';
    printf("\nResult minus: %d", isalpha(alpha_c));

    alpha_c='+';
    printf("\nResult non: %d", isalpha(alpha_c));

	printf("\n------------FT_isalpha---------\n");
	char ft_alpha_c;
    ft_alpha_c = 'Q';
    printf("\nResult mayus: %d", isalpha(ft_alpha_c));

    ft_alpha_c = 'q';
    printf("\nResult minus: %d", isalpha(ft_alpha_c));

    ft_alpha_c='+';
    printf("\nResult non: %d", isalpha(ft_alpha_c));

/* ******************************isalpha************************************* */
    return 0;
}
