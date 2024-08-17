/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:56:14 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/17 15:37:30 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    
}

ScalarConverter::~ScalarConverter()
{
    
}

int ScalarConverter::checkIfChar(std::string arg)
{
    if(arg.length() == 1 && !std::isdigit(arg[0]))
    {
        std::cout << "char: "  << "'" << arg << "'" << std::endl;
        int number = arg[0];
        std::cout << "int: " << number << std::endl;
        std::cout  << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(number) << "f" << std::endl;
        std::cout << std::fixed << "double " << std::fixed << std::setprecision(1) << static_cast<double>(number) << std::endl;
        return 1;
    }
    return 0;
}

int ScalarConverter::checkIfInt(std::string arg)
{
    if (arg.find('.') == std::string::npos)
    {
        std::stringstream ss(arg);
        int number;
        if (!(ss >> number))
            return 0;
        if (number > std::numeric_limits<char>::max() || number < std::numeric_limits<char>::min())
            std::cout << "char: impossible" << std::endl;
        else if(!std::isprint(number))
            std::cout << "char: not display" << std::endl;
        else
            std::cout << "char: " << "'" << static_cast<char>(number) << "'" << std::endl;
        std::cout << "int: " << number << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(number) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(number) << std::endl;
        return 1;
    }
    return 0;
}

int ScalarConverter::checkIfFloat(std::string arg)
{
    std::string argWithoutF = arg;
    if (arg[arg.size() - 1] == 'f' || arg[arg.size() - 1] == 'F') {
        argWithoutF = arg.substr(0, arg.size() - 1);
    }
    std::stringstream ss(argWithoutF);
    float flt;
    if (!(ss >> flt))
        return 0;
    if (static_cast<int>(flt) > std::numeric_limits<char>::max() || static_cast<int>(flt) < std::numeric_limits<char>::min())
        std::cout << "char : impossible" << std::endl;
    else if(!std::isprint(static_cast<char>(flt)))
        std::cout << "char : not display" << std::endl;
    else
        std::cout << "char : " << "'" << static_cast<char>(flt) << "'" << std::endl;
    if(flt > std::numeric_limits<int>::max() || flt < std::numeric_limits<int>::min() || (isnan(flt)))
        std::cout << "int : impossible" << std::endl;
    else
        std::cout << "int : " << static_cast<int>(flt) << std::endl;
        std::cout << "float: " << flt << "f" << std::endl;
    std::cout << "double: " << flt << std::endl;
    return 1;
}

int ScalarConverter::checkIfDouble(std::string arg)
{
    std::stringstream ss(arg);
    double flt;
    if(!(ss >> flt))
        return 0;
    if(static_cast<int>(flt) > std::numeric_limits<char>::max() || static_cast<int>(flt) < std::numeric_limits<char>::min())
        std::cout << "char : impossible" << std::endl;
    else if(!std::isprint(static_cast<char>(flt)))
        std::cout << "char : not display" << std::endl;
    else
        std::cout << "char : " << "'" << static_cast<char>(flt) << "'" << std::endl;

    if(flt > std::numeric_limits<int>::max() || flt < std::numeric_limits<int>::min())
        std::cout << "int : impossible" << std::endl;
    else
        std::cout << "int : " << static_cast<int>(flt) << std::endl;
        std::cout << "float : " << static_cast<float>(flt) << "f" << std::endl;
    std::cout << "double : " << flt << std::endl;
    return 1;
}

void ScalarConverter::convert(std::string arg)
{
    if(checkIfChar(arg) == 1)
        return;
    else if(checkIfInt(arg) == 1)
        return;
    else if(checkIfFloat(arg) == 1)
        return;
    else if(checkIfDouble(arg) == 1)
        return;
    else
        std::cout << "Error: Impossible to print this input" << std::endl;
}