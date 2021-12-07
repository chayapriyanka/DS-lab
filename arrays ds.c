#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, *arr, i,*b[1000];
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    for(i=0;i<num;i++)
    {
        *(b+i)=*(arr+(num-i-1));
    }
    for(i=0;i<num;i++)
    {
        *(arr+i)=*(b+i);
    }    
    

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
