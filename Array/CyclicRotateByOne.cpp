//https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

void rotate(int arr[], int n)
{
    
    int temp = arr[n-1];
    
    for(int i = n-2 ; i>=0 ; i--)
    {
        arr[i+1] = arr[i];
    }
    
    arr[0] = temp;
}