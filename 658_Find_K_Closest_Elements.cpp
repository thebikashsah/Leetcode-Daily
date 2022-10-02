

		// Approach -1 -> Heap

vector<int> findClosestElements(vector<int>& arr, int k, int x) {
            vector<int> ans; // stores the k closest elements // O(k)  space 
            
            int n=arr.size();  // array size
            
            // Approach
            // 1. We need the k closest elements i.e., on basis of this abs(arr[i]-x)
            // 2. We insert all the elements of the arr in a maxheap on basis of the
            //    absolute diff( or distance)
            // 3. We will keep the maxheap till size k, at the end we will get k smallest
            //    elements bases on distance.
            
            priority_queue<pair<int,int>> maxh; // pair<distance,value> // O(k) space
            
            for(int i=0;i<n;i++){  // O(N)
                    maxh.push({abs(arr[i]-x),arr[i]});  // O(log k)
                    
                    if(maxh.size()>k){
                            maxh.pop();
                    }          
            }
            
            while(!maxh.empty()){ // O(log k)
                    ans.push_back(maxh.top().second);
                    maxh.pop();
            }
            sort(ans.begin(),ans.end());  // O(k log k)
            
            
            // TC -> O(N) + O(log k) + O(log k) + O(k log k) ~ O(N log N) ( As N~k)
            // SC -> O(k) + O(k) ~ O(k) ~ O(N)
            
            
            
            return ans;


	   // Approach - 2 -> 2-Pointers


	    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

            // 2- Pointers approach

            // We come from both the sides and decide which pointer to move
            // at the end we get a window containing k elements which are closest to x

            int n=arr.size();

            int i=0;
            int j=n-1;

            // size of the window= j-i+1

            while(j-i+1>k){  // O(N-k)

                    if(abs(x-arr[j])>=abs(x-arr[i])){
                            j--;
                    }else{
                            i++;
                    }
            }

            // Now we have a window starting at i and ending at j containing k elements

            vector<int> ans;

            for(int start=i;start<=j;start++){ // O(k)
                    ans.push_back(arr[start]);
            }
            // TC -> O(N) (Approximately)
            // SC -> O(1) (No extra space besides the ans array)
            return ans;

    }

	    // Approach 3 -> Binary Search
	   

	    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

            int n=arr.size();

            vector<int> ans;

            int low=0;
            int high=n-1;

            int pos=0;
            while(low<=high){
                    int mid=(low+high)/2;

                    if(arr[mid]<=x){
                            low=mid+1;
                    }else{
                            high=mid-1;
                    }
            }
            pos=low;

            int l=pos-k<0?0:pos-k;
            int r=pos+k>=n?n-1:pos+k;

            while(r-l+1!=k){
                    if(abs(arr[l]-x)>abs(arr[r]-x)){
                            l++;
                    }else{
                            r--;
                    }
            }

            for(int i=l;i<=r;i++){
                    ans.push_back(arr[i]);
            }
            // sort(ans.begin(),ans.end());
            // TC -> O(LogN + 2K+1)
            return ans;

    }
