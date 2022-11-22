#include<iostream>
using namespace std;


class Student
{
public:
    string name;
    int id ;
    Student(string name,int id)
    {
        this->name=name;
        this->id =id;
    }

    Student*next;



};

class Linkedlist
{

private :
    Student*head;
    Student*tail;

public:
    Linkedlist()
    {
        this->head=NULL;
        this->tail=NULL;
    }
    void createNewStudent(string name,int id)
    {
        Student*temp=new Student();
        temp->id=id;
        temp->name=name;
        temp->next=NULL;


        if(head ==NULL)
        {
            head =temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }

    }

    void Showlist()
    {
        while(head ->data!=NUll)
        {
            cout<<"Student id "<<head->id<<endl;
            cout<<"student name"<<head->name<<endl;
            head=head->next;
        }
    }


};

int main()
{
    Linkedlist *myList=new Linkedlist();

    myList->createNewStudent(46641,"raf");
    myList->createNewStudent(45581,"asdf");
    myList->createNewStudent(58736,"wwde");

}
