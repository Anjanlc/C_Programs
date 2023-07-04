/* # 24

Write a program  in C to simulate a dynamic array.

 A dynamic array is an array data structure where the size of the array gets expanded and shrinked automatically as elements are inserted or removed.
 As you keep on inserting the elements, the array gets bigger. In the other hand, if you keep on removing the elements, the array start getting smaller 
 automatically.

 Your program should contain the definitions for the following Functions:

 1. init(): This function initializes the dynamic array for the first time, by creating an array of some initial size n, and polpulating it.
 2. insert(int index, int element): this function inserts the elementat the specified index of the dynamic array.
 3. _remove(int index): This function removes the element from the specified index of the dynamic array.
 4. display(): This function displays the element inside the dynamic array.
 5. cleanup(): This function fress previously allocated memory blocks once it is no longed needed.

 Hint: Use realloc to expand and shrink the size of the dynamic array.

 */

#include<stdio.h>
#include<stdlib.h>
double * init(int const);
void display(double * const, int const);
int insert(int * const , int * const, double *, int const, double const);
int remover(int * const, int * const, const int, double *);
int cleanup(const int * const, const int * const, const double * const);
int main(int argc, char argv[]){
    double * ptr = NULL;
    int const size = 4; // The default size of the array by default created will be 4.
    int const count = 0;
    ptr = init(size); // you can later declare a variable const when you want to be it const.
    display(ptr, size);
    printf("Enter How many Data You will be Entering in Array: ");
    int x = 0;
    scanf("%d", &x);
    for(int i = 0; i < x; i++)
    {
        double element = 0.00;
        printf("Enter Element to put in that index %d: ", i);
        scanf("%lf", &element);
        if(i >= 0)
            printf("\nInsertion at Index %d Successfully.\n\n", insert(&size, &count, ptr, i, element));\
        printf("\n Count = %d  < Size: %d", count, size);
        display(ptr, size);
    }
    int rm = 0;
    printf("\n\nAfter Insertion:\n");
    display(ptr, size);
    printf("\nEnter How Many Elements You want to remove: ");
    scanf("%d", &rm);
    for(int i = 0; i < rm; i++)
    {
        int index = 0;
        printf("\nEnter the Index of Element to Remove: ");
        scanf("%d", &index);
        --index;
        if(index <= count && index >= 0)
            printf("\nIndex %d Element %d Removed Successfully.", index, remover(&size, &count, index, ptr));
        else{
            printf("Index Out of Bound : Please Input a valid Index : Current valid Index is %d ", count);
            --i;
        } 
        printf("\n\n After Removal: \n\n");
        display(ptr, size);
    }
    print("Do You Want to Clean Up The Memory: ");
    printf("\n Press Enter or Any Key to Delete the Memory: ");
    char s = ' ';
    if( s == '\t' || s == ' ' || ( s >= 65 && s  <= 96) || ( s >= 97 && s <= 114))
        cleanup(&size, &count, ptr);
}

double * init(int const size){
    double * const ptr = (double*) calloc(size, sizeof(double));
    // The default value of each variable in array will be by default NULL;
    for(int i = 0; i < size; i++)
        *(ptr+i) = 0;
    return ptr;
}

void display(double * const ptr, int const size){
    if(size > 0)
        for(int i = 0; i < size; i++)
            printf("\nIndex %d Element: %lf\n", i, *(ptr+i));    
}

int insert(int * const size, int * const count, double * ptr, int const index, double const element){
    if(*size > *count){
        *(ptr+index)  = element;
        (*count)++;
        printf("\nCount : %d\n", *count);
        return index;
    } else if ( *count >= *size ) {
        printf("\nThe old size is %d", *size);
        *size = *size + 4;
        printf("\nThe new size is %d", *size);
        ptr = (double*) realloc(ptr, (*size) * sizeof(double));
        for(int i = 0; i < *size; i++)
            if(i > *count - 1)
                *(ptr+i) = 0;
        insert(size, count, ptr, index, element);
    } else
        printf("\n Index Out of Range or Type of Value mismatch.");
}

int remover(int * const size, int * const count, const int index, double * ptr){
    printf("\n Current Size: %d Current Count %d", *size, *count);
    int removed = *(ptr + index);
    if(*count > 0 && * count <= * size){
        *(ptr + index ) = 0;
        for(int i = index; i < *count; i++) // count gets countinuosly decreased so, here a error will occur. : Fixed
            *(ptr + i) = *(ptr + i + 1);
        --(*count);
        printf("\n\n After Removing: \n\n Current Size: %d Current Count %d", *size, *count);
        if(*size % *count > *count % 4){ // this logic can raise some error: Please Perform a check here.
            *size = *size - (*size % *count);
            printf("\nThe New Size of The Array is %d\n", *size);
            if(*size > 4)
                ptr = (double*)realloc(ptr, *size * sizeof(double));
        }
    }
    return  removed;
}

int cleanup(const int * const size, const int * const count, const double * const ptr){
    printf("An Array of Size %d : Has Current Count %d \n Which Memory Address in Ram is %u \n Is going to be Cleaned\n",*size, *count, ptr, ptr);
    free(ptr);
    return 1;
}
















































































// #include<stdio.h>
// #include<stdlib.h>
// double* init(void);
// int insert(int, double, double * const);
// int main(int argc, char argv[]){
//     double * ptr = NULL;
//     ptr = init(); // NOTE: The default size is 8 so all work can be done simultaneously and user don't have to increase the array.
//     for(int i = 0; i < 8; i++)
//         printf("%d ", *(ptr+i));
//     printf("\n%d ", sizeof *ptr / *(ptr+0));
// }

// double * init(){
//     const int size = 8; // The default size is 8; and type is of double.
//     double * ptr = (double*) calloc(size, sizeof(double));
//     for(int i = 0; i < size; i++)
//         *(ptr+i) = 0; // default value of every variable will be zero (0);
//     return ptr;
// }

// int insert(int const index, const double element, double * const ptr){
//     if(index)
//     *(ptr+index) = element;
// }
