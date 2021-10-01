#include<stdio.h>
#include<stdlib.h>
struct node{
    //hi this is gurkirat singh
    int data;
    struct node * next;
};struct node * start;
void create(){
    int info;
    int choice =1;
    while(choice==1){
        struct node * newnode,*temp;
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the element");
        scanf("%d",&info);
        newnode->data=info;
        newnode->next=NULL;
        if(start==NULL){
            start=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("do u want to enter more\n");
        scanf("%d",&choice);
    }
}
void search(int data){
    struct node * ptr;
    ptr=start;
    while (ptr->next!=NULL)
    {
        if(ptr->data==data){
            printf("datat found");
            break;
        }
        ptr=ptr->next;
    }  
}
void linklisttraversal(struct node* ptr){    //here start is the head and ptr is pointer that goes from one to another
    while(ptr !=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    create();
    linklisttraversal(start);
    search(3);
    linklisttraversal(start);
}
