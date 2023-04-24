#include <stdio.h>
#include "headers/linked_list.h"

int main() {
    int num1 = 234, num2 = 987, result;
    Node* node1 = NULL, *node2 = NULL, *res = NULL;
    while(num1){
        insertAtEnd(&node1, num1%10);
        num1/=10;
    }
    return 0;
}
