/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:47:55 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/18 15:29:05 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstdint>
#include <iostream>

struct Data{
    int id;
};

class Serializer
{
    private:
        Serializer();
        ~Serializer();
        
    public:
        Serializer(Serializer const &serialize);
        Serializer  &operator=(Serializer const &serialize);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif