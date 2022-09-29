

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
