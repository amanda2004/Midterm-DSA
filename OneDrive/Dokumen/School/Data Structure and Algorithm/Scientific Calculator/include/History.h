#ifndef HISTORY_H
#define HISTORY_H

#include <string>

class history_list
{
    public:
        history_list();
        ~history_list();
        void add_result(std::string result);
        void show_history();

    private:
        struct Node {
            std::string data;
            Node* next;
            Node(std::string value): data(value), next(nullptr){}
        };

        Node* head;
        Node* tail;
};

#endif // HISTORY_H
