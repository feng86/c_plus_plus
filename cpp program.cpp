#include<stdio.h>
int n,i,a[100];//this three variable has been declared globally to access easily from any function

void traverse()
{
    int sum=0;
    float avg=0;
    for (i=0;i<n;i++)
    {
        sum=sum+a[i];//adding every elements of the array to sum by travesing
    }
    avg=sum/n;
    printf("the sum is %d and average is %f\n",sum,avg);
}

void insertion()
{
    int position,value;
    printf("\nposition to enter?: \n");
    scanf("%d",&position);
    printf("Enter the value: \n");
    scanf("%d",&value);
    printf("Before insertion:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);//accessing every elements to print in the console before insertion
    }
    for(i=n-1;i>=position-1;i--)//entering the value of an array elements to one division right from the position
    {
        a[i+1]=a[i];
    }
    a[position-1]=value;//entering inserted value in the right place
    n++;//as n is increased so n++
    printf("\nAfter insertion:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

void deletion()
{
    int pos;
    printf("\nposition to delete:\n");
    scanf("%d",&pos);
    printf("Before deletion:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=pos-1;i<n;i++)//entering the value of an array elements to one division left from the position-1 to position
    {
        a[i]=a[i+1];
    }
    n--;//as n is decresed by 1 so n--
    printf("After deletion:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

void searching()
{
    int s,c=0;
    printf("\nwhich value to search?: ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)//comparing every elements with inserted value
        {
            c++;//c is incresing for every found
        }
    }
    if(c)
        printf("Found for %d time(s)\n",c);
    else
        printf("Not found\n");
}



int main(void)
{
    printf("Enter the number of elements of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//taking the elemnets and keeping them in a[100]
    }
    traverse();//function calling serially
    insertion();
    deletion();
    searching();
}
