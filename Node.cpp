#include <iostream>

using namespace std;

class Node{
    private:
        float data;
        Node* nextAddress;
    
    public:
        Node(){
            this->data = 0.0f;
            this->nextAddress = NULL;
        }

        Node(float val){
            this->data = val;
            this->nextAddress = NULL;
        }

        float getData(){
            return data;   
        }

        Node* getNextAddress(){
            return nextAddress;
        }

        void setNextAddress(Node * nextElement){
            nextAddress = nextElement;
        }
};