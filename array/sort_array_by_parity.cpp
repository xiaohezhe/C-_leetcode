#include <iostream>
#include <algorithm>  //swap
#include <vector>

using namespace std;

// output is 偶数组后面跟着奇数组输出
int main() {

	vector<int> nums ={3,1,2,4};
	int size=nums.size();
	vector<int> nums_odd={};
  

	int p=0;
	int p_odd=0;

	int m=size-1;

	for(int i=0; i<size; i++)
	{

		if(nums[i]%2==0)
		{
			nums[p]=nums[i];
			cout<< "p: "<< p << endl;			
			p++;
		}
		else
		{
			nums_odd.push_back(nums[i]);
			p_odd++;
		}
	}
	cout <<"p: "<< p<<  " p_odd: "<< p_odd <<endl;

	for(int i=0; i<p_odd; i++)
	{
		nums[p]=nums_odd[i];
		p++;
	}

	for(int i=0; i<nums.size(); i++)
	{
		cout<< nums[i]<<" , "<<nums_odd[i] << endl;
	}


};