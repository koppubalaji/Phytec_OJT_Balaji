#include<stdio.h>
int main()
{
int arr[100];
int size;
printf("Enter the size of the array : %d",size);
scanf("%d",&size);
for(int i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
int high_count=0,element;
for(int i=0;i<size;i++)
{
	int count=0;
    for(int j=0;j<size;j++)
    {
        if(i!=j & arr[i]==arr[j])
        {
            count++;
        }
    }
    if(count > high_count)
    {
        element=arr[i];
	high_count=count;
    }

}
printf("Max Frequency is for element %d: %d ",element,high_count+1); 
}
