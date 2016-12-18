//
// Created by Grady on 2016/12/17.
//

#ifndef JUSTP_LINKLISTPROBLEM_H
#define JUSTP_LINKLISTPROBLEM_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void Push(Node** listHead, int newData);
Node* BuildSimpleList();
int Count(Node* head, int searchFor);
int GetNth(Node *head, int index);

void DeleteList(Node** head);
int Pop(Node **head);

void InsertNth(Node **head, int index, int newData);

void printList(Node *head);
void SortedInsert(Node **head, Node *newNode);
void InsertSort(Node **head);

void Append(Node **aHead, Node **bHead);
void FrontBackSplit(Node *source, Node **frontHead, Node **backHead);
void RemoveDuplicates(Node *head);
void MoveNode(Node **destHead, Node **sourceHead);
#endif //JUSTP_LINKLISTPROBLEM_H