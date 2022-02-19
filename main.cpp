#include <iostream>
#include "classNode.cpp"
#include "classLinkedList.cpp"

using namespace std;

LinkedList list = LinkedList();

int main(int argc, char const *argv[])
{
    void createNewElement();
    void searchElement();
    void menu();

    int menuSelection;

    while (true)
    {
        menu();
        cout << "Digite uma opcao: ";
        cin >>  menuSelection;

        try
        {
            if(menuSelection != 1 || menuSelection != 2 || menuSelection != 3 || menuSelection != 4 || menuSelection != 0)
            {
                throw 1;
            }
        }
        catch(int error)
        {
            cout << "Valor invalido, digite novamente: ";
            cin >> menuSelection;
        }
        


        switch (menuSelection)
        {
            case 1:{createNewElement();}break;
            case 2:{list.printList();}break;
            case 3:{searchElement();}break;
            case 4:{/*kikuchi*/}break;
            case 0:{exit(0);}break;
            default:{;}break;
        }
    }
    
    return 0;
}

void createNewElement()
{
    float val;
    int input = 1;

    while(input == 1)
    {
        cout << "Digite o valor que deseja adicionar: ";
        cin >> val;

        Node * newElement = new Node(val);
        list.insertNewElement(newElement);

        cout << "\nDeseja adicionar outro elemento? Sim <1> Nao <outro input> ";
        cin >> input;
    }
}

void searchElement()
{
    float val;

    cout << "Digite um valor para a procura: ";
    cin >> val;

    list.printElement(val);
}

void menu()
{
    cout << "\nMENU:" << endl;
    cout << "(1) Adicionar valores na lista" << endl;
    cout << "(2) Printar todos os elementos da lista" << endl;
    cout << "(3) Printar elemento especifico da lista" << endl;
    cout << "(4) Remover elemento da lista" << endl;
    cout << "(0) Sair do programa" << endl;
}