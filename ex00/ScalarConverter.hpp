/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 11:57:04 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/17 14:00:32 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
#include <cstdlib>
#include <sstream>

class  ScalarConverter
{
    public:
        ScalarConverter();
        ~ScalarConverter();
        static void convert(std::string arg);
};

#endif





















































// try {
//     // Attempt char conversion
//     if (literal.length() == 1 && !std::isdigit(literal[0])) {
//         // If the string is just one character long and not a digit
//         char c = literal[0];
//         std::cout << "char: '" << c << "'\n";
//         std::cout << "int: " << static_cast<int>(c) << "\n";
//         std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f\n";
//         std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << "\n";
//         return; // If successful, return early
//     }

//     // Attempt int conversion
//     int i = std::stoi(literal); // Convert string to int
//     // Handle char conversion from int
//     if (i < std::numeric_limits<char>::min() || i > std::numeric_limits<char>::max()) {
//         std::cout << "char: impossible\n";
//     } else if (std::isprint(i)) {
//         std::cout << "char: '" << static_cast<char>(i) << "'\n";
//     } else {
//         std::cout << "char: Non displayable\n";
//     }
//     std::cout << "int: " << i << "\n";
//     std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f\n";
//     std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << "\n";
//     return; // If successful, return early
// } catch (const std::exception& e) {
//     // If conversion to int fails, the catch block is executed.
//     // You don't need to do anything here because the next type conversion (like float) will be tried.
//     // This block is empty by design.
// }
