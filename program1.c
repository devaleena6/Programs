/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left,*right;
};
   
        
        struct node*create(){
            int x;
            struct node*newnode;
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("enter the data");
            scanf("%d",&x);
            if(x==-1){
                return 0;}
                newnode->data=x;
                printf("enter left child of %d",x);
                newnode->left=create();
            printf("enter the right hild of %d",x);
            newnode->right=create();
            return newnode;
        };
        void main(){
        struct node*root;
        root=0;
        root =create();
    }
    