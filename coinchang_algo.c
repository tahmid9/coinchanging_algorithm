#include<stdio.h>
int main()
{
    int A[20],n,i,num,value;
   printf("enter the value : \n");
   scanf("%d",&value);
    printf("Enter the total number of note :\n");
    scanf("%d",&n);
    printf("Enter the  notes: \n");
    for(i =0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int count = 0;
    for(i =0;i<n;i++)
    {
    while(value>0 && (A[i]<=value))
    {

           num = value/A[i];
           count = count+num;
           value= value - (A[i]*num);
           printf("print the %d  notes are  %d\n",A[i],num);
    }
    if(value == 0)
        break;
    }
    printf("the number of notes are: %d\n",count);
    printf("the remaining value is : %d\n",value);



    return 0;
}
