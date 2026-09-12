#include <stdio.h>
#include <stdlib.h>
struct Node{int data;struct Node* next;} ;
struct Node* create_node(int data);
void print_list(struct Node *head);
int count_nodes(struct Node *head);
int main(){
    struct Node*n1=create_node(1);
    struct Node*n2=create_node(2);
    struct Node*n3=create_node(3);
    n1->next=n2;
    n2->next=n3;
    printf("%d",count_nodes(n1));
    return 0;
}
struct Node* create_node(int data){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->data = data;
    new->next = NULL;//后期貌似会被复写
    return new;
}
void print_list(struct Node *head){
    struct Node *p=head;
    while(p!=NULL){
    printf("%d->",p->data);
    p=p->next;
    printf("NULL\n");
    }
}
int count_nodes(struct Node *head){
    int i=1;
    struct Node *p=head;
    while(p->next!=NULL){
        p=p->next;
        i++;
    }
    return i;
}
struct Node* delete_node(struct Node *head, int target)
{
    if (head == NULL) return NULL;
    
    // 情况1：删除头节点
    if (head->data == target) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        return head;  // 直接返回新头，不再继续
    }
    
    // 情况2：删除中间或尾部节点
    struct Node *p = head;
    while (p->next != NULL && p->next->data != target) {
        p = p->next;
    }
    if (p->next != NULL) {  // 找到了
        struct Node *temp = p->next;
        p->next = temp->next;
        free(temp);
    }
    return head;
}