#include <stdio.h>
#include <stdlib.h>
//貌似可以让id和i有某种对应关系，方便直接查找学号
typedef struct Student{
    char name[20];
    int id;
    float score;
}Student;

typedef struct{
struct Student* data;
int size;
int capacity;
}StudentArray;

void init_array(StudentArray *arr, int init_cap);       //init_cap意为扩容前的最大值
void grow(StudentArray *arr) ;
void push_back(StudentArray *arr, struct Student s);
struct Student*get(StudentArray*,int);
void set(StudentArray *arr, int i, struct Student s);
void free_array(StudentArray *arr);
int main(){
    StudentArray *t = malloc(sizeof(StudentArray));
    init_array(t,5);
    Student *data=malloc(sizeof(Student));             //data[0]......
    data[0]=(Student){"shiduo",1,99};
    push_back(t,data[0]);
    printf("%d",t->size);
    free_array(t);
    return 0;
} 
void init_array(StudentArray *arr, int init_cap){
    arr->data=malloc(init_cap*(sizeof(Student)));
    arr->size=0;
    arr->capacity=init_cap;
}
void grow(StudentArray *arr){
    int new_cap = arr->capacity * 2;
    struct Student *temp = realloc(arr->data, new_cap * sizeof(Student));
    if (temp == NULL) {
        printf("扩容失败\n");
        return;               // 失败就别改任何东西
    }
    arr->data = temp;
    arr->capacity = new_cap;  // 成功了才改
}
void push_back(StudentArray *arr, struct Student s){
    if(arr->size==arr->capacity){
        grow(arr);
    }
    arr->data[arr->size]=s;
    arr->size++;
    
}
struct Student*get(StudentArray *arr,int i){
    if(i>=arr->size){return NULL;};
    return &arr->data[i];
}
void set(StudentArray *arr, int i, struct Student s) {
    arr->data[i] = s;                                   //用于修正
}
void free_array(StudentArray *arr) {
    free(arr->data);
    arr->data = NULL;
    arr->size = 0;
    arr->capacity = 0;
}