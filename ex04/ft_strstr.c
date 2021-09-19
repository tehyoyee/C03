/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehyoyee <taehykim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 19:56:16 by tehyoyee          #+#    #+#             */
/*   Updated: 2021/09/19 19:56:17 by tehyoyee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    while (str[i])
    {
        j = 0;
        while (str[i + j] == to_find[j])
        {
            j++;
            if (to_find[j] == '\0')
                return str + i;
        }
        i++;
    }
    return (0);
}

int main(void)
{
    char    str[20] = "power overwhelming";
    char    *to_find = "verw";

    write(1, ft_strstr(str, to_find), 20);      
}