#include<stdio.h>
#include<conio.h>

int main(){
    int array[20],size,i,position,insert_element ;
    printf("Enter the Number of Elements you have to insert in empty array : ");
    scanf("%d", &size);
    printf("Enter The %d Elements : ", size) ;
    for ( i = 0; i < size ; i++)
    {
        scanf("%d",&array[i]);
    }
    for( i = 0; i < size; i++)
    {
        printf("Element at array[%d] is : %d\n" , (i+1) ,array[i]);
    }
    printf("Enter the Element You have to Insert in array : ");
    scanf("%d",&insert_element);
    printf("Enter the position where You have to Insert Element : ");
    scanf("%d",&position);
    for(int j = size ; j >= position ; j-- ){
        array[j] = array[j-1] ;
    }
    array[position-1] = insert_element ;
    size++ ;
    printf("Elements In Array After Insetion Operation !\n");
    for ( i = 0; i < size; i++)
    {
        printf("Element at array[%d] is : %d\n" , (i+1) ,array[i]);
    };
    return 0 ;
};