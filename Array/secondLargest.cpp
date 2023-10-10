// https://practice.geeksforgeeks.org/problems/second-largest3735/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    
	    //Find First Maximum
	   int ans = -1;
	   
	   for(int i=0 ; i<n; i++)
	   {
	       if(arr[i] > ans) ans = arr[i];
	   }
	   
	   int second = -1;
	   
	   for(int i=0 ; i<n ; i++)
	   {
	       if(arr[i]!=ans && arr[i] > second) second = arr[i];
	   }
	   
	   return second;
	}
};



class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    
	    int first;
	    int second;
	    
	    if(arr[0] >= arr[1]){
	        first = arr[0];
	        second = arr[1];
	    }
	    else
	    {
	        first = arr[1];
	        second = arr[0];
	    }
	    
	    for(int i=2 ; i<n ; i++)
	    {
	        if(arr[i] > first){
	            second = first;
	            first = arr[i];
	        }
	        else if(arr[i] > second)
	        {
	            second = arr[i];
	        }
	    }
	    
	   // cout<<first<< " " << second<< " ";
	    

	    return (first == second) ? -1 : second;
	}
};