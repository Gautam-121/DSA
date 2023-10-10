// https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
class Solution{
  public:
    int missingNumber(int array[], int n) {
        // Your code goes here
        
        int sumOfArray = 0;
        
        for(int i=0 ; i<n-1 ; i++)
        {
            sumOfArray+=array[i];
        }
        
        int sumOfNaturalNo = 0;
        

        for(int i=1 ; i<=n ; i++)
        {
            sumOfNaturalNo+=i;
        }
        
        
        int missingNumber = sumOfNaturalNo - sumOfArray;
        
        return missingNumber;
    }
};