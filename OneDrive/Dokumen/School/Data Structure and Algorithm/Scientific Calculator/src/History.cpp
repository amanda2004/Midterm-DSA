#include "History.h"
#include <iostream>
#include <cstdlib>

using namespace std;

history_list::history_list(): head(nullptr), tail(nullptr){}

history_list::~history_list()
{
    while(head){
        Node* temp = head;
        head = head -> next;
        delete temp;
    }
}

void history_list::add_result(double result){
    Node* new_node = new Node(result);
    if(!head){
        head = new_node;
        tail = new_node;
    } else {
        tail -> next = new_node;
        tail = new_node;
    }
}

void history_list::show_history(){
    if(!head){
        std::cout << "Calculator History is not available." << std::endl;
        return;
    }

    Node* current = head;
    std::cout << "Calculator History List:" << std::endl;
    while(current){
        std::cout << current -> data << std::endl;
        current = current -> next;
    }
}
