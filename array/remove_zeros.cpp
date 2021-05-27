#include <iostream>
#include <algorithm>  //swap
#include <vector>

using namespace std;


int main() {

	vector<int> nums ={0,1,0,3,12};
	int size=nums.size();
	int p=0;

	for (int i=0; i< size; i++)
	{
		if(nums[i]!=0)
		{
			nums[p]=nums[i];
			cout << "p: "<<p<<" , "<< nums[p]<< endl;
			p++;

		}
	}


	for(p;p<size;p++)
	{
		nums[p]=0;
	}

	for(int i=0; i<size; i++)
	{
		cout << nums[i]<< endl;
	}




};