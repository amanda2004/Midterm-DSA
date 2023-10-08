#include "History.h"
#include <iostream>
#include <cstdlib>
#include <string>

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

void history_list::add_result(string result){
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
        cout << "Calculator History is not available." << endl;
        return;
    }

    Node* current = head;
    cout << "Calculator History List:" << endl;
    while(current){
        cout << current -> data << endl;
        current = current -> next;
    }
}
