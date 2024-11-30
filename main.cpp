#include <iostream>

#include "ListNS.h"
//
// Created by Glog on 9/13/2024.
//

#include "MyOrderedList.h"
using namespace MyList;

void MyListTest();
void MyOrderedListTest();

int main()
{
    MyListTest();
    ListNS<int> myList(6);
    MyOrderedListTest();
    return 0;
}

void MyListTest()
{
    ListNS<int> myList(6);

    for (int i = 0; i < 6; i++)
    {
        myList[i] = i;
    }

    std::cout << "Initial Size: " << myList.getSize() << std::endl;
    std::cout << "Initial List: " << myList.toString() << '\n' << std::endl;

    myList.erase(5);

    std::cout << "Value 5 erased." << std::endl;
    std::cout << "Size after erasure: " << myList.getSize() << std::endl;
    std::cout << "List after erasure: " << myList.toString() << '\n' << std::endl;

    myList.erase_at(2);
    std::cout << "Index 2 erased." << std::endl;
    std::cout << "Size after erasure: " << myList.getSize() << std::endl;
    std::cout << "List after erasure: " << myList.toString() << '\n' << std::endl;


    myList.insert(2, 2);
    std::cout << "Value 2 inserted at index 2." << std::endl;
    std::cout << "Size after insert: " << myList.getSize() << std::endl;
    std::cout << "List after insert: " << myList.toString() << '\n' << std::endl;

    myList.clear();
    std::cout << "List cleared." << std::endl;
    std::cout << "Size after clear: " << myList.getSize() << std::endl;
    std::cout << "List after clear: " << myList.toString() << '\n' << std::endl;


    myList.append(5);
    std::cout << "Value 5 appended." << std::endl;
    std::cout << "Size after append: " << myList.getSize() << std::endl;
    std::cout << "List after append: " << myList.toString() << '\n' << std::endl;


    ListNS<int> myList2(6);

    int j = 5;
    for (int i = 0; i < 6; i++)
    {
        myList2[i] = j++;
    }
    std::cout << "MyList2 Created." << std::endl;
    std::cout << "MyList2 Values: " << myList2.toString() << std::endl;
    std::cout << "MyList2 Size: " << myList2.getSize() << '\n' << std::endl;

    myList = myList2;
    std::cout << "MyList Overwritten with MyList2." << std::endl;
    std::cout << "MyList Values: " << myList.toString() << std::endl;
    std::cout << "MyList Size: " << myList.getSize() << std::endl;

}

void MyOrderedListTest()
{
    MyOrderedList<int> myOrderedList;

    myOrderedList.insert(1);
    myOrderedList.insert(140);
    myOrderedList.insert(52);
    myOrderedList.insert(37);
    myOrderedList.insert(70);
    myOrderedList.insert(21);

    std::cout << "Initial Size: " << myOrderedList.getSize() << std::endl;
    std::cout << "Initial List: " << myOrderedList.toString() << '\n' << std::endl;

    myOrderedList.erase(5);

    std::cout << "Value 5 erased." << std::endl;
    std::cout << "Size after erasure: " << myOrderedList.getSize() << std::endl;
    std::cout << "List after erasure: " << myOrderedList.toString() << '\n' << std::endl;

    myOrderedList.erase_at(2);
    std::cout << "Index 2 erased." << std::endl;
    std::cout << "Size after erasure: " << myOrderedList.getSize() << std::endl;
    std::cout << "List after erasure: " << myOrderedList.toString() << '\n' << std::endl;


    myOrderedList.insert(2);
    std::cout << "Value 2 inserted at index 2." << std::endl;
    std::cout << "Size after insert: " << myOrderedList.getSize() << std::endl;
    std::cout << "List after insert: " << myOrderedList.toString() << '\n' << std::endl;

    myOrderedList.clear();
    std::cout << "List cleared." << std::endl;
    std::cout << "Size after clear: " << myOrderedList.getSize() << std::endl;
    std::cout << "List after clear: " << myOrderedList.toString() << '\n' << std::endl;


    MyOrderedList<int> myOrderedList2;

    myOrderedList2.insert(127);
    myOrderedList2.insert(62);
    myOrderedList2.insert(39);
    myOrderedList2.insert(400);
    myOrderedList2.insert(3);
    myOrderedList2.insert(71);

    std::cout << "MyOrderedList2 Created." << std::endl;
    std::cout << "MyOrderedList2 Values: " << myOrderedList2.toString() << std::endl;
    std::cout << "MyOrderedList2 Size: " << myOrderedList2.getSize() << '\n' << std::endl;

    myOrderedList = myOrderedList2;
    std::cout << "MyOrderedList Overwritten with MyOrderedList2." << std::endl;
    std::cout << "MyOrderedList Values: " << myOrderedList.toString() << std::endl;
    std::cout << "MyOrderedList Size: " << myOrderedList.getSize() << std::endl;

}
