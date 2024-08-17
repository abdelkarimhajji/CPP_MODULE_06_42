/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 11:59:48 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/17 12:55:43 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "error arg\n";
        return 1;
    }
    ScalarConverter::convert(av[1]);
    // std::cout << "--------------------------------\n";
    // ScalarConverter::convert("nan");
    // std::cout << "--------------------------------\n";
    // ScalarConverter::convert("42.0f");
    // std::cout << "--------------------------------\n";
    // ScalarConverter::convert("'c'");
    // std::cout << "--------------------------------\n";
    // ScalarConverter::convert("+inf");
    
    return 0;
}