#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    
    struct node * next;
    struct node * next;
    struct node * next;
};struct node * start;
void create(){
    int info;
    int choice=1;
    start=NULL;
    struct node * newnode, *temp;
    while(choice==1){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the element\n");
        scanf("%d",&info);
        newnode->data=info;         //data is stored in data and next is made null
        newnode->next=NULL;
        if(start==NULL){
            start=temp=newnode;
        }
        else{
            temp->next=newnode;     //temp takes the newnode's address in its next part and it moved to new 
            temp=newnode;           //node from where same process can happen
        }
        printf("do u want to enter more\n");
        scanf("%d",&choice);
    }
}

void delete()
{
    struct node *ptr,*ptr1, *ptr2, *temp;
    // ptr=start
    ptr1 = start;
    while (ptr1 != NULL){
        ptr2 = ptr1;
        while (ptr2->next != NULL){
            if (ptr1->data == ptr2->next->data){
                temp= ptr2->next;
                ptr2->next = ptr2->next->next;
                free(temp);
            }
            else{
                ptr2 = ptr2->next;
            }
        }
        ptr1 = ptr1->next;
    }
}

void linklisttraversal(){    
    struct node * ptr= start;
    while(ptr !=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
} 
int main(){
    create();
    linklisttraversal();
    delete();
    linklisttraversal();
}
