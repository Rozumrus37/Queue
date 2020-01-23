//
// Created by Ruslan Rozumnyi on 1/23/20.
//
#include "QNode.h"
#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

class Queue {
public:
    QNode *front;
    QNode *last;



    QNode * newNode(int element) {
        QNode * temp = new QNode();
        temp->value = element;
        temp->next = nullptr;
        return temp;
    }

    Queue * createQueue() {
        Queue * temp = new Queue();
        temp->front = nullptr;
        temp->last = nullptr;
        return temp;
    };

    void push(Queue * q, int element) {
        QNode * node = new QNode();
        node->value  = element;
        node->next = nullptr;

        if(q->last == nullptr) {
            q->front = q->last = node;
            return;
        }

        q->last->next = node;
        q->last = node;
    }

    int Top(Queue * q) {
        return q->front->value;
    }

    void pop(Queue * q) {
        if(q->front == nullptr) {
            return;
        }
        q->front = q->front->next;
        if(q->front == nullptr)
            q->last = nullptr;
    }

    bool IsEmpty(Queue * q) {
        if(q->front == nullptr) return 1;
        return 0;
    }



};

#endif //QUEUE_QUEUE_H


