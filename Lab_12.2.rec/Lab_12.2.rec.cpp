#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

void addNode(Node** head, int data) {
    if (*head == nullptr) {
        *head = new Node{ data, nullptr };
        return;
    }
    addNode(&((*head)->next), data);
}

void checkDuplicates(Node* head) {
    if (head == nullptr) {
        cout << "\n The list doesn`t include two equal numbers: " << endl;
        return;
    }

    Node* curr = head->next;
    while (curr != nullptr) {
        if (head->data == curr->data) {
            cout << "\n The list includes two equal numbers. " << head->data << endl;
            return;
        }
        curr = curr->next;
    }
    checkDuplicates(head->next);
}

int main()
{
    Node* head = nullptr;
    int amount;
    cout << "\n Enter the number of the list elements: ";
    cin >> amount;
    for (int i = 0; i < amount; i++)
    {
        int num;
        cout << "Enter the number to include to list: ";
        cin >> num;
        addNode(&head, num);
    }
    checkDuplicates(head);
    return 0;
}
