#include <iostream>
#include <algorithm>  
using namespace std;
int main() {
	// int a[]={1,2,3};
	// std::cout << "The toal bytes for the array is: "<< sizeof(a)<<std::endl;
	// std::cout <<"The first element of the array is: "<< *a <<std::endl;
	// std::cout << "The first element bytes(int bytes) of the array is: " <<sizeof(*a)<<std::endl;
	// std::cout <<"The number of elements in the array is: "<<(sizeof(a)/sizeof(*a))<<std::endl;
	int nums[]={1,1,0,1,1,1,1};
	int array_size= sizeof(nums)/sizeof(*nums);
	std::cout << "&nums: "<< &nums << " *nums: "<< *nums <<" nums: "<<  nums<<" nums[0]: "<<  nums[0]<<std::endl;
	int length=0;
	int length_max=0;

	for (int i=0; i < array_size;i++)
	{
		if(nums[i]==1 )
		{
			length++;
		}
		else
		{
		
			length_max=max(length,length_max);
			length=0;
			
		}


	}
	length_max=max(length,length_max);
	std::cout << "output the max lenghth of 1: "<<length_max << std::endl;
};
