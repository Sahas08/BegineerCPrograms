import java.util.*;

public class FirstOccurence
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        
        int arr[];
        int ele;
        
        System.out.println("Enter the total number of elements");
        int n = sc.nextInt();
        
        System.out.println("Enter the sorted array");
        arr = new int[n];
        
        for(int i=0; i<n; i++)
        {
        	arr[i] = sc.nextInt();
        }
        
        System.out.println("Enter the element");
        ele = sc.nextInt();
        
        System.out.println("Last occurence at index : "+(LastOccurence(arr, ele)));
    }
    
    public static int LastOccurence(int arr[], int ele)
    {
        int low = 0;
        int high = arr.length - 1;
        int mid = 0;
        int index = 0;
        
        while(low != high)
        {
            mid = low + (high - low)/2;
            
            if(arr[mid] == ele)
            {
            	  index = mid;
                low = mid;
            }
            
            else if(ele < arr[mid])
            {
                // 1 2 3 3 3 4 
                
                high = mid - 1;
            }
            
            else 
            {
                low = mid + 1;
            }
            
        }
        
        return index;
    }

}
