#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct  node
{
    /* data */
    char ch;
    struct node *next;

    
}linkNode;


typedef linkNode *linklist;

int f34(linklist h,char string[]){
    linklist p,q;
    char *pc;
    pc=string;
    int count = 0;
    while (*pc!='\0')
    {
        p=h;
        /* code */
        while (p->next != NULL)
        {
            if (p->next->ch != *pc)
            {
                /* code */
                p=p->next;
            }else{
                break;
            }
            
        }
        if (p->next == NULL)
         {
                q=(linklist)malloc(sizeof(linkNode));
                q->ch=*pc;
                q->next=p->next;
                p->next=q;
                
            count++;
            
            
        }
        pc++;
        
    }
    
    

    return count;
}

int main(){

    int _a123 =12;
    int Aap = 5;
    // linkNode linklist=(linklist)malloc(sizeof(10));
    
    // char s[]={'a','e','r','a','d','g'};
    // int c = 1;
    // c = f34(&linklist,s);
    // printf("return = %d\n",c);  //显示引号中的内容
    // return 0;
}


