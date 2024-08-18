/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:47:53 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/18 08:04:10 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    
}
Serializer::~Serializer()
{
    
}


Serializer::Serializer(Serializer const &serialize)
{
    *this = serialize;
}
Serializer  &Serializer::operator=(Serializer const &serialize)
{
    (void)serialize;
    return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}