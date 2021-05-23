#include <iostream>
#include <algorithm>  //swap
#include <vector>

using namespace std;


int main() {
//vectore  similar as an array, define a vector and output the result
//**********************************************************************
	vector<int> nums ={0,1,2,2,3,0,4,2};

	int value=2;
	int size=nums.size();

	for (int i=0;i<size;i++ )
	{
		if(nums[i]==value)
		{
			cout<< "i: "<< i<< endl;
			nums.erase(nums.begin()+i);
			i--;// when the nums[2]=2 is deleted, the next 2 becomes the nums[2], so i-- is for to delete the repeted 2
			size--;

		}

	}

	cout<< "size: "<< size<< endl;

	for (int i=0;i<size;i++)
	{
		cout<< "nums: "<<i<< " is "<< nums[i]<< endl;
	}

};