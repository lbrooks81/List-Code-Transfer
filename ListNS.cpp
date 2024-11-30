//
// Created by Glog on 9/13/2024.
//

#include "ListNS.h"

#include <iostream>
#include <ostream>
#include <stdexcept>


namespace MyList
{
    template <typename T>
    ListNS<T>::ListNS()
    {
        size = 0;
        items = nullptr;
        capacity = 4;
        count = 0;
    }

    template <typename T>
    ListNS<T>::ListNS(int capacity) : capacity(capacity)
    {
        items = new T[capacity];
        size = capacity;
        count = 0;
    }

    template<typename T>
    ListNS<T>::~ListNS()
    {
        delete [] items;
    }

    template<typename T>
    ListNS<T> & ListNS<T>::operator=(T& item)
    {
        return *this;
    }

    template<typename T>
    T & ListNS<T>::operator[](size_t index)
    {
        if (index >= size)
        {
            throw std::out_of_range("index is out of range");
        }
        return items[index];
    }

    template<typename T>
    size_t ListNS<T>::getSize() const
    {
        return size;
    }

    template<typename T>
    void ListNS<T>::shrink()
    {
        T* tempArray = new T[capacity / 2];

        for (int i = 0; i < size; i++)
        {
            tempArray[i] = items[i];
        }

        capacity /= 2;
        items = tempArray;
        delete [] tempArray;
    }

    template<typename T>
    void ListNS<T>::grow()
    {
        T* tempArray = new T[capacity == 0 ? 1 : capacity * 2];

        for (int i = 0; i < capacity; i++)
        {
            tempArray[i] = items[i];
        }

        capacity = capacity == 0 ? 1 : capacity * 2;
        delete [] items;
        items = tempArray;
    }

    template<typename T>
    size_t ListNS<T>::find(T item)
    {
        for (int i = 0; i < size; i++)
        {
            if (items[i] == item)
            return i;
        }
        return -1;
    }

    template<typename T>
    void ListNS<T>::append(const T item)
    {
        insert(size, item);
    }

    template<typename T>
    void ListNS<T>::insert(size_t index, T item)
    {
        if(capacity == 0)
        {
            items = new T[1];
            capacity++;
        }

        if (index > size)
        {
            throw std::out_of_range("Index out of range");
        }

        if(size + 1 >= capacity)
        {
            grow();
        }

        for (int i = capacity - 1; i > index; i--)
        {
            items[i] = items[i - 1];
        }

        items[index] = item;

        size++;
    }

    template<typename T>
    void ListNS<T>::erase(const T item)
    {
        size_t index = find(item);
        if (index != -1)
        {
            erase_at(index);
        }
    }

    template<typename T>
    void ListNS<T>::erase_at(size_t index)
    {
        if (index >= size)
        {
            throw std::out_of_range("Index out of range.");
        }

        for (size_t i = index; i < capacity; i++)
        {
            std::cout << "Set before removal: " << this->toString() << std::endl;
            items[i] = items[i + 1];
            std::cout << "Set after removal: " << this->toString() << std::endl << std::endl;

        }

        if (--size < capacity / 4)
        {
            shrink();
        }

    }

    template<typename T>
    void ListNS<T>::clear()
    {
        size = 0;
    }

    template<typename T>
    std::string ListNS<T>::toString()
    {
        std::string s;
        int i = 0;
        for(; i < size - 1; i++)
        {
            s += std::to_string(items[i]) + ", ";
        }
        s += items[i];
        return s;
    }

    template<typename T>
    std::ostream & operator<(std::ostream &os, const ListNS<T> &list)
    {
        for(int i = 0; i < list.size ; i++)
        {
            os << list[i];
        }
        return os;
    }

    template class ListNS<int>;
};





   