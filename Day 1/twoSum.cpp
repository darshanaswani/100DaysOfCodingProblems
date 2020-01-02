#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// basic Solution - O(n^2)

vector<int> twoSum_basic(vector<int> nums, int target) {
  vector<int> indices;
  for (int i = 0; i < nums.size(); i++) {
    for (int j = 1; j < nums.size(); j++) {
      if (nums[i] + nums[j] == target) {
        indices.push_back(i);
        indices.push_back(j);
        return indices;
      }
    }
  }
  return indices;
}
	

//optimized solution - O(n)

vector<int> twoSum_optimized(vector<int> nums,int target){
	vector<int> indices;
	unordered_map<int,int> u1;
	
	for(int i = 0;i<nums.size();i++){
			if(u1.find(target - nums[i])!= u1.end()){
					indices.push_back(u1[target - nums[i]]);
					indices.push_back(i);
					return indices;
				}
			u1[nums[i]] = i;
	}
	return indices;
}


//2,7,11,15

int main(){
	vector<int> array{2,7,11,15};
	vector<int> result = twoSum_optimized(array,9);
	for(int x : result){
		cout<<x<<endl;
	}
	return 0; 
	
}

