/* 
 * File:   listclass.hpp
 * Author: vitalii
 *
 * Created on July 24, 2018, 6:00 AM
 */

#include <iostream>
#include <string>

#pragma once

using namespace std;

template<typename T>
class MyOneWayList
{
public:
    MyOneWayList()
    {
        size = 0;
        head = nullptr;
    };
    ~MyOneWayList()
    {
        clear();
    };

    void pop_front()
    {
        Node<T> *tmp = head;
        
        head  = head->pNext;
        
        delete tmp;
        
        size--;
    };
    
    void push_back(T data)
    {
        if (head == nullptr)
        {
            head = new Node<T>(data);
        }
        else
        {
            Node<T> *current = this->head;

            while(current->pNext != nullptr)
            {
                current = current->pNext;
            }
            current->pNext = new Node<T>(data);
        }
        size++;
    };
    
    void push_front(T data)
    {
        head = new Node<T>(data, head);
        
        size++;
    };
    
    void insert(T data, int index)
    {
        if(index == 0)
        {
            push_front(data);
        }
        else
        {
            Node<T> *previous = this->head;

            for(int i = 0; i < index - 1; i++)
            {
                previous = previous->pNext;
            }
            
            Node<T> *newNode = new Node<T>(data, previous->pNext);
            
            previous->pNext = newNode;
            
            size++;
        }
    };
    
    void removeAt(int index)
    {
        if(index == 0)
        {
            pop_front();
        }
        else
        {
            Node<T> *previous = this->head;
            
            for(int i = 0; i < index - 1; i++)
            {
                previous = previous->pNext;
            }
            
            Node<T> *toDelete = previous->pNext;
            
            previous->pNext = toDelete->pNext;
            
            delete toDelete;
            
            size--;
        }
    };
    
    void pop_back()
    {
        removeAt(size - 1);
    };
    
    void clear()
    {
        while(size)
        {
            pop_front();
        }
    };
    
    int getSize(){ return size; }

    T& operator[](const int index)
    {
        int counter = 0;
        Node<T> *current = this->head;

        while (current != nullptr)
        {
            if (counter == index)
            {
                return current->data;
            }
            current = current->pNext;
            counter++;
        }
    };
    
private:
    
    template<typename U>
    class Node
    {
    public:
        Node *pNext;
        T data;
        Node(T data = T(), Node *pNext = nullptr)
        {
            this->data = data;
            this->pNext = pNext;
        }
    };
    int size;
    Node<T> *head;
};


/*
     MyOneWayList<int> myList;
    
    int numbersCount;
    cin >> numbersCount;
    
    for(int i = 0; i < numbersCount; i++)
    {
        myList.push_back(rand() % 10);
    }
    
    for(int i = 0; i < myList.getSize(); i++)
    {
        cout << myList[i] << endl;
    }
 */
