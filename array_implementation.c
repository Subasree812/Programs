#include<stdio.h>
#define MAX 20
void create();
void insert();
void deletion();
void search();
void display();
void reverse();
int b[MAX],n,i;

void main(){
    int x;
    while(1){
        printf("\n\n1.create\n2.delete\n3.search\n4.insert\n5.display\n6.reverse\n7.exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&x);
        switch(x){
            case 1:
                create();
                break;
            case 2:
                deletion();
                break;
            case 3:
                search();
                break;
            case 4:
                insert();
                break;
            case 5:
                display();
                break;
            case 6:
                reverse();
                break;
            case 7:
                return;
            default:
                printf("\nEnter the correct choice.");
        }
       
    }
}


void create(){
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    if(n>MAX){
        printf("Number of elements exceeds the limit");
        n=MAX;
    }
    for(i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&b[i]);
    }
    display();
}

void reverse(){
    printf("\nThe reversed array is\n");
    for(i=n-1;i>=0;i--){
        printf("%d\n",b[i]);
    }    
}


void deletion(){
    int p;
    printf("Enter the position you want to delete: ");
    scanf("%d",&p);
    if(p>=n || p<0){
        printf("\nInvalid Location");
    }
    else{
        for(i=p;i<n-1;i++){
            b[i]=b[i+1];
        }
        n--;
        printf("\nThe elements after deletion: ");
        display();
    }
}



void search(){
    int s;
    printf("\nEnter the element to search: ");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(b[i]==s){
            printf("Value is located at the position %d\n",i);
            return;
        }
        else{
            printf("Value is not located\n");
        }
    }
}



void insert(){
    int p,a;
    printf("Enter the position you need to insert: ");
    scanf("%d",&p);
    if(p>n || p<0 || n==MAX){
        printf("Invalid location or list is full");
    }
    else{
        for(i=n;i>p;i--){
            b[i]=b[i-1];
        }
        printf("\nEnter the element to be insert: ");
        scanf("%d",&a);
        b[p]=a;
        n++;
        printf("\nThe list after insertion.");
        display();
    }
}



void display(){
    printf("\nThe elements of the list are ");
    for(i=0;i<n;i++){
        printf("\n%d",b[i]);
    }
}



