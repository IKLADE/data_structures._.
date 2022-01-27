#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct Dictionary
{
    int index;
    char *word;
    char *meaning;
    struct Dictionary* next;
    struct Dictionary* prev;   
};
struct Dictionary *head=NULL;
                            //    (head,1,apple,a fruit)
void insertEnd(struct Dictionary *head,int i,char *w,char *m)
{
    struct Dictionary *new_node=(struct Dictionary *)malloc(sizeof(struct Dictionary));
    struct Dictionary *temp=head;
    new_node->index=i;
    new_node->word=w;
    new_node->meaning=m;
    if(head==NULL)
    {
        new_node->prev=NULL;
        new_node->next=NULL;
        head=new_node;
        return ;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->next=NULL;
    new_node->prev=temp;

}

void insertWord(struct Dictionary *head,char *w,char *m)
{
    struct Dictionary *temp=head;
    while(temp->next!=NULL)
    {
        if(w[0]>temp->word[0])
            temp=temp->next;
        if(w[0]==temp->word[0])
        {
            while(i<strlen(w))

        }
    }

}

void delete(struct Dictionary* head,int key)
{
    if(head==NULL)
    {
        printf("No node to be deleted");
    }
    else if(head->word==key)
    {
        temp=head;
        head=temp->next;
        temp->next->prev=NULL;
        free(temp);
    }
    else
    {
        while(temp->next!=NULL)
        {
            
            temp=temp->next;
            if(temp->word==key)
            {
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
                free(temp);
            }
        }

    }
}

void createBaseDictionary()
{
    insertEnd(head,1,"afforest","establish a forest on previously unforested land");
    insertEnd(head,2,"aftermath","the consequences of an event, especially a catastrophic one");
    insertEnd(head,3,"be on cloud nine","feel extreme happiness or elation");
    insertEnd(head,4,"becalm","make still, steady, or tranquil");
    insertEnd(head,5,"blithesome","carefree and happy and lighthearted");
    insertEnd(head,6,"broadsheet","an advertisement intended for wide distribution");
    insertEnd(head,7,"buffoonish","like a clown");
    insertEnd(head,8,"caprice","a sudden desire");
    insertEnd(head,9,"capricious","determined by chance or impulse rather than by necessity");
    insertEnd(head,10,"causerie","light informal conversation for social occasions");
    insertEnd(head,11,"congratulatory","expressive of sympathetic pleasure or joy on account of someone's success or good fortune dapper");
    insertEnd(head,12,"debonaire","having a sophisticated charm");
    insertEnd(head,13,"devil-may-care","marked by a carefree unconventionality or disreputableness");
    insertEnd(head,14,"emblazon","decorate with heraldic arms");
    insertEnd(head,15,"eudaemonia","a contented state of being happy and healthy and prosperous");
    insertEnd(head,16,"extremum","the point located farthest from the middle of something exultant");
    insertEnd(head,17,"featherbrained","lacking seriousness");
    insertEnd(head,18,"felicity","pleasing and appropriate manner or style");
    insertEnd(head,19,"fiddle-faddle","trivial nonsense");
    insertEnd(head,20,"gabble","speak (about unimportant matters) rapidly and incessantly");
    insertEnd(head,21,"gallant","having or displaying great dignity or nobility");
    insertEnd(head,22,"gilt","having the deep slightly brownish color of gold");
    insertEnd(head,23,"gleeful","full of high-spirited delight");
    insertEnd(head,24,"heyday","the period of greatest prosperity or productivity");
    insertEnd(head,25,"hotheaded","characterized by undue haste and lack of thought or deliberation indefinite quantity an estimated quantity");
    insertEnd(head,26,"ism","a belief accepted as authoritative by some group or school");
    insertEnd(head,27,"madcap","characterized by impulsiveness or recklessness");
    insertEnd(head,28,"majestic","having or displaying great dignity or nobility");
    insertEnd(head,29,"merry andrew","a person who amuses others by ridiculous behavior");
    insertEnd(head,30,"natty","marked by up-to-dateness in dress and manners");
    insertEnd(head,31,"noble-minded","of high moral or intellectual value");
    insertEnd(head,32,"nuance","a subtle difference in meaning or opinion or attitude");
    insertEnd(head,33,"phantasy","imagination unrestricted by reality");
    insertEnd(head,34,"pollyannaish","pleasantly (even unrealistically) optimistic");
    insertEnd(head,35,"prate","speak about unimportant matters rapidly and incessantly");
    insertEnd(head,36,"salad days","the best time of youth");
    insertEnd(head,37,"sappy","overly or insincerely emotional");
    insertEnd(head,38,"snappy","quick and energetic");
    insertEnd(head,39,"soda pop","a sweet drink containing carbonated water and flavoring");
    insertEnd(head,40,"spiffy","marked by up-to-dateness in dress and manners");
    insertEnd(head,41,"stunner","a very attractive or seductive looking woman");
    insertEnd(head,42,"timberland","land that is covered with trees and shrubs");
    insertEnd(head,43,"timbre","the distinctive property of a complex sound");
    insertEnd(head,44,"tittle-tattle","light informal conversation for social occasions");
    insertEnd(head,45,"twaddle","pretentious or silly talk or writing");
    insertEnd(head,46,"vividness","interest and variety and intensity");
    insertEnd(head,47,"wearisome","so lacking in interest as to cause mental fatigue");
    insertEnd(head,48,"whimsical","determined by chance or impulse rather than by necessity");
    insertEnd(head,49,"whimsy","an odd or fanciful or capricious idea");
    insertEnd(head,50,"zippy","quick and energetic");
}



int main()
{
    createBaseDictionary();
    
    return 0;
}
