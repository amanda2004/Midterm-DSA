//Check if HISTORY_H is already defined or not to prevent double inclusion
#ifndef HISTORY_H
#define HISTORY_H
#include <string>

using namespace std;

//Declaration of the history_list class
class history_list
{
    public:
        //Constructor declaration
        history_list();

        //Destructor declaration
        ~history_list();

        //Method declaration to add a result to the history
        void add_result(string result);

        //Method declaration to display the calculator's history
        void show_history();

        //Method declaration to delete the calculator's history
        void delete_history();

    private:
        //Declaration of a nested struct called Node
        struct Node {
            string data; //Data(a calculator result)
            Node* next; //Pointer to the next node in the linked list
            Node(const string& result): data(result), next(nullptr){}
            //Constructor for Node that initializes data and sets next to nullptr
        };

        Node* head; //Pointer to the first node in the linked list
        Node* tail; //Pointer to the last node in the linked list
};

#endif // HISTORY_H
