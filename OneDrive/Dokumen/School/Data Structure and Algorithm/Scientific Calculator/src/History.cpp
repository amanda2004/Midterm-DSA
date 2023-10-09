#include "History.h" //Include the header file for the History class
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//Constructor for the history_list class
history_list::history_list(): head(nullptr), tail(nullptr){}

//Destructor for the history_list class
history_list::~history_list()
{
    //Release memory for all nodes in the linked list
    while(head){
        Node* temp = head;
        head = head -> next;
        delete temp;
    }
}

//Function to add a result (expression or calculation) to the history
void history_list::add_result(string result){
    Node* new_node = new Node(result);
    if(!head){
        //If the list is empty, set both head and tail to the new node
        head = new_node;
        tail = new_node;
    } else {
        //Otherwise, add the new node to the end of the list and update the tail
        tail -> next = new_node;
        tail = new_node;
    }
}

//Function to display the calculator's history
void history_list::show_history(){
    if(!head){
        //If the list is empty, display a message indicating that there is no history
        cout << "Calculator History is not available." << endl << endl;
        return;
    }

    Node* current = head;
    cout << "Calculator History List:" << endl;
    while(current){
        //Display each item in the history list
        cout << current -> data << endl;
        current = current -> next;
    }

    cout << "\n";
}

//Function to delete the entire history list and release the memory
void history_list::delete_history(){
    while(head){
        Node* temp = head;
        head = head -> next;
        delete temp;
    }

    //Set the tail pointer to nullptr to indicate an empty list
    tail = nullptr;
}
