#ifndef HISTORY_H
#define HISTORY_H

class history_list
{
    public:
        history_list();
        ~history_list();
        void add_result(double result);
        void show_history();

    private:
        struct Node {
            double data;
            Node* next;
            Node(double value): data(value), next(nullptr){}
        };

        Node* head;
        Node* tail;
};

#endif // HISTORY_H
