#include <iostream>
#pragma once

using namespace std;

class Node
{
    private:

        float data;
        Node * nextAdress;
    
    public:

        Node()
        {
            this->data = NULL;
            this->nextAdress = NULL;
        }

        Node(float val)
        {
            this->data = val;
            this->nextAdress = NULL;
        }

        float getData()
        {
            return data;   
        }

        Node * getNextAdress()
        {
            return nextAdress;
        }

        void setNextAdress(Node * nextElement)
        {
            nextAdress = nextElement;
        }
};