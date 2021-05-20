#include <iostream>
#include <algorithm>  
#include <vector>

using namespace std;

int main() {
//vectore  similar as an arrang, define a vector and output the result
//**********************************************************************
	vector<int> nums ={-10,-5,1,2,4,7};

   //  for (int i=0; i<nums.size() ; i++)
   //  {
	  // cout << ' ' << nums[i]<< endl;

   //  }
//**********************************************************************
    int n= nums.size();
    vector<int> result(n);

    int left=0;
    int right=n-1;
    int sqr;

	for(int j=n-1; j>=0;j--)
	{
			if(abs(nums[left])>abs(nums[right]))
		{	
			sqr=nums[left]*nums[left];
			left++;

		  	// cout << "result[n-left]" << result[n-left]<< endl;
		}
		else
		{
			sqr=nums[right]*nums[right];

			right--;
		  	// cout << "result[right]" << result[right]<< endl;

		}
		result[j]=sqr;
	}

		for (int i=0; i<result.size() ; i++)
	    {
		  	cout << "result[i]" << result[i]<< endl;

	    }





};


