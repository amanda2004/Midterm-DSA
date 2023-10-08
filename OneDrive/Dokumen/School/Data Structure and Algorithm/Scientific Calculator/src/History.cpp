//These codes managing a history of calculator results

//Include necessary headers and libraries
#include "History.h"
#include <iostream>
#include <cstdlib>

using namespace std;

//Constructor for the history_list class
history_list::history_list(): head(nullptr), tail(nullptr){}

//Destructor for the history_list class
history_list::~history_list()
{
    //Delete all nodes in the linked list to free memory
    while(head){
        Node* temp = head;
        head = head -> next;
        delete temp;
    }
}

//Function to add a new result to the history list
void history_list::add_result(double result)
{
    //Create a new node with the given result
    Node* new_node = new Node(result);

    //If the list is empty, set both head and tail to the new node
    if(!head){
        head = new_node;
        tail = new_node;
    } else {
        //Otherwise, append the new node to the end of the list and update
        tail -> next = new_node;
        tail = new_node;
    }
}

//Function to display the calculator's history
void history_list::show_history()
{
    //Check if the history list is empty
    if(!head){
        std::cout << "Calculator History is not available." << std::endl;
        return;
    }

    //Initialize a pointer to traverse the linked list starting from the head
    Node* current = head;

    //Display a message indicating the start of the history list
    std::cout << "Calculator History List:" << std::endl;

    //Traverse the linked list and print each result
    while(current){
        std::cout << current -> data << std::endl;
        current = current -> next;
    }
}
