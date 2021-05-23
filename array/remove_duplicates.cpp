#include <iostream>
#include <algorithm>  //swap
#include <vector>

using namespace std;


int main() {

	vector<int> nums ={1,2,2};
	int j=0;// j is the slower pointer

	int size=nums.size();


	for(int i=1; i<size; i++)// i is the slower point
	{

		if(nums[i]!=nums[j])//it is better than nums[i+1]!=nums[j],this have bounary problem
							// {1,2,2} cannot delete the last repeated data 2
		
		{
			j++;
			nums[j]=nums[i];

		}

	}

	cout<< "j: "<< j<< endl;


	for(int i=0; i<j+1; i++)
	{
		cout<< "nums: "<< i<< " is " << nums[i]<< endl;
	}

};