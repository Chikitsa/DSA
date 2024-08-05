class Solution {
public:
   
    int firstOccurence(vector<int>& arr,int n,int k){
        int low=0,high=n-1,first=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid] == k){
                first=mid;
                high=mid-1;
            }
            else if(arr[mid]<k){
                low=mid+1;

            }
            else{
                high=mid-1;
            }
            
        }
        return first;
    }
    int lastOccurence(vector<int>& arr,int n,int k){
    int low=0,high=n-1,last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<k){
            low=mid+1;

        }
        else{
            high=mid-1;
        }      
    }
    return last;
    }

    vector<int> searchRange(vector<int>& arr, int k) {
        int n=arr.size();
        int first=firstOccurence(arr,n,k);
        if(first==-1) return {-1,-1};
        int last=lastOccurence(arr,n,k);
        return {first,last};
    }
};