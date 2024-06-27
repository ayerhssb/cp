
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int ans = INT_MAX;
	    int low =0;
	    int high =n-1;
	    
	    while(low<=high){
	        int mid = (low+high)/2;
	        
	        if(arr[low]<=arr[mid]){
	            ans = min(ans, arr[low]);
	            low = mid+1;
	        }
	        else{
	            ans = min (ans, arr[mid]);
	            high = mid-1;
	        }
	    }
	    int* targetPtr = find(&arr[0], arr + n, ans);

        // getting index from pointer
        int targetIndex = targetPtr - arr;
	    return targetIndex;
	}

};