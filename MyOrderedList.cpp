//
// Created by Glog on 9/20/2024.
//

#include "MyOrderedList.h"

#include <stdexcept>

namespace MyList
{
    template <Numeric T>
    size_t MyOrderedList<T>::find(T match)
    {
        int left = 0;
        int right = this->size - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (match == this->items[mid])
            {
                return mid;
            }
            if (match < this->items[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return -1;
    }

    template <Numeric T>
    void MyOrderedList<T>::insert (T item)
    {

        if (this->size + 1 >= this->capacity)
        {
            this->grow();
        }

        int left = 0;
        int right = this->size - 1;
        int insertIndex = this->size;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (this->items[mid] == item)
            {
                insertIndex = mid;
                break;
            }
            if (this->items[mid] < item)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
                insertIndex = mid;
            }
        }

        for (int i = this->size; i > insertIndex; i--)
        {
            this->items[i] = this->items[i - 1];
        }

        this->items[insertIndex] = item;
        this->size++;
    }

    template <Numeric T>
    void MyOrderedList<T>::insert (size_t index, T item)
    {
        throw std::logic_error("Not implemented");
    }
    template class MyOrderedList<int>;

} // MyList