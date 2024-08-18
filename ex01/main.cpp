/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:47:49 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/18 15:07:56 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data*   data = new Data;

    uintptr_t  i = Serializer::serialize(data);

    Data* o = Serializer::deserialize(i);

    if(data == o)
        std::cout << "the same adress \n";
    else
        std::cout << "not the same adress \n";
    delete data;

    return 0;
}