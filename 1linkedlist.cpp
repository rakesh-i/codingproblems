//Student database with alphabetical ordering
#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
using namespace std;

struct Stud{
    char *name = new char(10);
    float weight;
    int age;
    Stud *next;
};

void sort(Stud **head, Stud *t){
    static int count = 0;
    Stud *temp = *head;
    Stud *prev = temp;
    if(count==0){
        *head = t;
        count++;
        return;
    }
    while((temp!=NULL)&&(strcmp(t->name, temp->name)>0)){
        prev = temp;
        temp = temp->next;
    }
    if(strcmp(t->name, (*head)->name)<0){
        t->next = *head;
        *head = t;
        return;
    }
    t->next = temp;
    prev->next = t;
    count++;


}

void insert(Stud **head){
    Stud *temp1 = new Stud();
    cout<<"Enter the name: ";
    cin>>temp1->name;
    cout<<"Enter the age: ";
    cin>>temp1->age;
    cout<<"Enter the weight: ";
    cin>>temp1->weight;
    temp1->next = NULL;
    sort(head, temp1);
}

void print(Stud **head){
    Stud *temp = *head;
    printf("Name\tAge\tWeight\n");
    printf("__________________________\n");
    while(temp!=NULL){
        printf("%-s\t%-d\t%-.2f\n", temp->name, temp->age, temp->weight);
        temp = temp->next;
    }
}

int count(Stud **head, int age){
    Stud *temp = *head;
    int count=0;
    while(temp!=NULL){
        if(temp->age>=age){
            count++;
        }
        temp = temp->next;
    }
    return count;

}

int main()
{   
    int c = 0;
    int x = 1;
    Stud *head = NULL;
    while(x>0){
        insert(&head);
        cout<<"Enter 1 to add a student or -1 to exit: ";
        cin>>x;
        if(x<0){
            break;
        }
    }
    c = count(&head, 20);
    cout<<c<<endl;
    print(&head);
}
