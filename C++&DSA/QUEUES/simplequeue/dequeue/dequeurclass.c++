#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Dequeue {
public:
    Node* head;
    Node* tail;
    int size;

    Dequeue() {
        head = tail = NULL;
        size = 0;
    }

    void push_front(int val) {
        Node* nn = new Node(val);
        if (size == 0) {
            head = tail = nn;
        } else {
            head->prev = nn;
            nn->next = head;
            head = nn;
        }
        size++;
    }

    void push_back(int val) {
        Node* nn = new Node(val);
        if (size == 0) {
            head = tail = nn;
        } else {
            tail->next = nn;
            nn->prev = tail;
            tail = nn;
        }
        size++;
    }

    Node* popfront() {
        if (size == 0) {
            cout << "list is empty" << endl;
            return NULL;
        }
        Node* temp = head;
        if (size == 1) {
            head = tail = NULL;
        } else {
            head = head->next;
            head->prev = NULL;
        }
        size--;
        delete temp; // Avoid memory leak
        return head;
    }

    void popback() {
        if (size == 0) {
            cout << "list is empty" << endl;
            return;
        }
        if (size == 1) {
            popfront();
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp; // Avoid memory leak
        size--;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int dqueue_size() {
        return size;
    }

    bool empty() {
        return size == 0;
    }

    int front() {
        if (size == 0) {
            cout << "queue is empty" << endl;
            return -1;
        }
        return head->val;
    }

    int back() {
        if (size == 0) {
            cout << "queue is empty" << endl;
            return -1;
        }
        return tail->val;
    }
};

int main() {
    Dequeue q;

    q.push_back(50);
    q.push_back(10);
    q.push_back(20);
    q.push_back(30);
    q.display();

    q.push_front(40);
    q.push_front(55);
    q.display();

    q.popback();
    q.display();

    return 0;
}
