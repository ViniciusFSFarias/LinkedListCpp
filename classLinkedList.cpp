#include <iostream>
#include "classNode.cpp"

using namespace std;

class LinkedList : public  Node
{
    private:

        Node * head;
        Node * tail;

    public:

        LinkedList()
        {
            this->head = NULL;
            this->tail = NULL;
        }

        LinkedList(Node * firstElement)
        {
            this->head = firstElement;
            this->tail = head;
        }

        void printList()
        {
            Node * actualElement;

            actualElement = head;

            while (actualElement != NULL)
            {
                cout << "Dado: " << actualElement->getData() << endl;
                actualElement = actualElement->getNextAdress();
            } 
            
        }

        void printElement(float val)
        {
            Node * actualElement;
            int position;
            bool wasFound = false;

            actualElement = head;
            position = 0;

            while (actualElement != NULL)
            {
                if(actualElement->getData() == val)
                {
                    cout << "O valor existe na lista na posicao " << position << endl;
                    wasFound = true;
                }
            
                actualElement = actualElement->getNextAdress();
                position++;
                
            } 
            
            if(wasFound == false)
            {
                cout << "O valor digitado nao existe na lista" << endl;
            }
        }

        void insertNewElement(Node * newElement)
        {
            newElement->setNextAdress(head);
            head = newElement;
        }
};