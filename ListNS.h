//
// Created by Glog on 9/13/2024.
//

#ifndef LISTNS_H
#define LISTNS_H
#include <string>

namespace MyList
{
    template<typename T>
    class ListNS
    {
    protected:
        int size;
        T* items;
        void grow();
        void shrink();
    public:
        int count;
        int capacity;

        ListNS();
        ListNS(int capacity);
        ~ListNS();

        ListNS & operator=(T &);
        T & operator[](size_t index);

        virtual size_t find(T match);

        virtual void insert(size_t index, T item);
        void append(T item);

        void erase(T item);
        void erase_at(size_t index);

        void clear();
        std::string toString();

        size_t getSize() const;

        friend std::ostream & operator<<(std::ostream &os, const ListNS &list);

    };
}





#endif //MYLIST_H
