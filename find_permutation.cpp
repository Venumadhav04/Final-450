 void helper(string s, int l, int r, unordered_set<string> &ans){
	        if(l == r){
	            ans.insert(s);
	            return;
	        }    
	        
	        for(int i = l;i <= r;i++){
	            swap(s[l], s[i]);
	            helper(s, l+1, r, ans);
	            swap(s[l], s[i]);
	            
	        }
	        
	       return;
	    }
	    
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    unordered_set<string> ans;
		    helper(s, 0, s.size()-1, ans);
		    vector<string> result;
		    
		    for(auto idx = ans.begin();idx != ans.end();idx++){
		        result.push_back((*idx));
		    }
		    sort(result.begin(), result.end());
		    return result;
		}
