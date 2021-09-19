/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehyoyee <taehykim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:50:12 by tehyoyee          #+#    #+#             */
/*   Updated: 2021/09/19 18:50:14 by tehyoyee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (s1[i] && s2[i] && i < n )
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (i != n)
        return (s1[i] - s2[i]);
    return (0);
}

int main(void)
{
    char    s1[8] = "abcdeg";
    char    s2[8] = "abcdee";
    int                n = 6;

    printf("%d", ft_strncmp(s1, s2, n));
}