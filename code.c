#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter the number of test conduceted:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the %d test marks of students:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int first = INT_MIN;
    int second = INT_MIN;  

    for (int i = 0; i < n; i++)
	{
		if(arr[i] > first)
		{
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second && arr[i] < first)
		{
			second = arr[i];
		}	
	}
    printf("Two best mark among %d test conducted are %d and %d",n,first,second);

    return 0;
}
