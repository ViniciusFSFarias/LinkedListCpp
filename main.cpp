#include <iostream>
#include "LinkedList.cpp"

using namespace std;

LinkedList list;

void menu() {
    cout << "\nMENU:" << endl;
    cout << "(1) Adicionar elemento na lista" << endl;
    cout << "(2) Exibir lista" << endl;
    cout << "(3) Buscar elemento" << endl;
    cout << "(4) Excluir elemento" << endl;
    cout << "(0) Sair" << endl;
}

float getInput() {
    float val;
    cout << "Informe o valor: ";
    cin >> val;
    return val;
}

int main() {
    int choice = -1;
    while (choice != 0) {
        menu();
        cout << "Digite uma opcao: ";
        cin >> choice;
        switch (choice) {
            case 1: list.insertNewElement(getInput()); break;
            case 2: list.printList(); break;
            case 3: list.printElement(getInput()); break;
            case 4: list.deleteElement((int)getInput()); break;
            case 0: break;
            default: cout << "Opcao invalida." << endl; break;
        }
    }
    return 0;
}
