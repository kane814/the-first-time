#include <stdio.h>
struct Node{int data;struct Node*next;}; 
struct book{char title[50];float price;int page;};
struct Date{int year;int month;int day;};
struct Student{char *a;struct Date b;float score;};
int main(){
struct Node n1,n2,n3,n0;
n1.data=1; n2.data=2; n3.data=3;
/*
n1.next=&n2; n2.next=&n3; n3.next=NULL;
struct Node*p=&n1;
while(p!=NULL){
    printf("%d->",p->data);
    p=p->next;
}
printf("NULL\n");
*/
/*
struct book b1;
struct book*t=&b1;
scanf("%s %f %d",b1.title,&b1.price,&b1.page);
printf("%s%f%d",t->title,b1.price,b1.page);
*/
struct Student stu[2];
stu[0].a="zhuge";
stu[0].b.year=2007;
stu[0].b.month=10;
stu[0].b.day=19;
struct Student *c = stu;
printf("%d\n",c->b.year);
printf("p 跳转的字节数: %zu\n", (char*)(c+1) - (char*)c);
printf("%zu\n",sizeof(stu[0]));
/*
n1.next=NULL; n2.next=&n1; n3.next=&n2;
struct Node*p=&n3;
while(p!=NULL){
    printf("%d->",p->data);
    p=p->next;
}
printf("NULL\n");
*/
n1.next=&n0; n2.next=&n3; n3.next=NULL;
n0 = (struct Node){99, &n2};  // 使用复合字面量赋值,神奇
struct Node*p=&n1;
while(p!=NULL){
    printf("%d->",p->data);
    p=p->next;
}
printf("NULL\n");
return 0;
}