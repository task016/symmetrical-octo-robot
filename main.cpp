#include "Heap.h"

int main(){
    Heap *gomila=new Heap(15);
    gomila->insert(50);
    gomila->insert(40);
    gomila->insert(30);
    gomila->insert(20);
    gomila->insert(10);
    gomila->insert(15);
    gomila->insert(22);
    gomila->insert(18);
    gomila->print();
    gomila->insert(23);
    gomila->print();
    gomila->insert(45);
    gomila->print();
    gomila->insert(55);
    gomila->print();

    return 0;
}