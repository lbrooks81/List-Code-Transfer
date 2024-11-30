//
// Created by Glog on 9/20/2024.
//

#ifndef MYORDEREDLIST_H
#define MYORDEREDLIST_H
#include "ListNS.h"

namespace MyList
{

    template <typename T>
        concept Numeric = std::is_arithmetic_v<T>;

    template <Numeric T>
    class MyOrderedList : public ListNS<T>
    {
    public:
        void insert(size_t index, T item) override;
        size_t find(T match) override;
        void insert(T item);
    };

} // MyList

#endif //MYORDEREDLIST_H
