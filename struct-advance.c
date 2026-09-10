#include <stdio.h>
#include <stdlib.h>
struct Node{int data;struct Node* next;} ;
struct Node* create_node(int data);
int main(){
    struct Node*n1=create_node(1);
    struct Node*n2=create_node(2);
    struct Node*n3=create_node(3);
    //定义
/*
    create_node(1)->next=create_node(2);             不能这样写，节点没记录下来！！！
    create_node(2)->next=create_node(3);      
*/    
    n1->next=n2;
    n2->next=n3;
    struct Node*p=n1;
    while(p!=NULL){
    printf("%d->",p->data);
    p=p->next;
}
printf("NULL\n");
    p=n1;
    printf("%p\n",(void*)n1);
    while(n1!=NULL){
        struct Node*temp=n1;     //指针遍历
        n1=n1->next;
        printf("%p\n",(void*)n1);
        free(temp);
    }
    return 0; 
}
struct Node* create_node(int data) {
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->data = data;
    new->next = NULL;//后期貌似会被复写
    return new;
}