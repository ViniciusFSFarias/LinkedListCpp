#include <iostream>
#include "Node.cpp"

using namespace std;

class LinkedList {
    private:
        Node* head;

    public:

        LinkedList() {
            this->head = NULL;
        }

        LinkedList(Node* firstElement) {
            this->head = firstElement;
        }

        void printList() {
            Node* current = head;
            cout << "[";
            while (current != NULL) {
                cout << " " << current->getData();
                current = current->getNextAddress();
            } 
            cout << " ]" << endl;
        }

        void printElement(float val){
            Node* current = head;
            int position = 0;
            bool found = false;
            while (current != NULL) {
                if(current->getData() == val){
                    cout << "O valor existe na lista na posicao " << position << endl;
                    found = true;
                }
                current = current->getNextAddress();
                position++;
            } 
            if(!found){
                cout << "O valor digitado nao existe na lista" << endl;
            }
        }

        void insertNewElement(float element){
            Node* node = new Node(element);
            node->setNextAddress(head); // node = head->getNextAddress();
            head = node;
        }

        void deleteElement(int position){
            Node *current = new Node();
            Node *previous = new Node();
            current = head;
            cout << "** deleteElement() DEBUG: current->getData() = " << current->getData() << endl;
            for(int i = 0; i < position; i++){
                cout << "** deleteElement() DEBUG: i = " << i << endl;
                previous = current;
                cout << "** deleteElement() DEBUG: previous->getData() = " << previous->getData() << endl;
                current = current->getNextAddress();
                cout << "** deleteElement() DEBUG: current->getData() = " << current->getData() << endl;
            }
            previous->setNextAddress(current->getNextAddress());
            current->setNextAddress(NULL);
            cout << "** deleteElement() DEBUG: previous->getData() = " << previous->getData() << endl;
            cout << "** deleteElement() DEBUG: head->getData() = " << head->getData() << endl;
        }
};
