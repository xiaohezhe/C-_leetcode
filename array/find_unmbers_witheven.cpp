#include <iostream>
#include <algorithm>  
using namespace std;
int main() {
	// int a[]={1,2,3};
	// std::cout << "The toal bytes for the array is: "<< sizeof(a)<<std::endl;
	// std::cout <<"The first element of the array is: "<< *a <<std::endl;
	// std::cout << "The first element bytes(int bytes) of the array is: " <<sizeof(*a)<<std::endl;
	// std::cout <<"The number of elements in the array is: "<<(sizeof(a)/sizeof(*a))<<std::endl;
	int nums[]={555,901,482,1771};
	int array_size= sizeof(nums)/sizeof(*nums);
	int n=0;

	int digit=0;

	for (int i=0; i < array_size;i++)
	{	
		int n=0;
		int temp=nums[i];
		while(temp)
		{
			temp= temp/10;
			n++;
			std::cout <<"temp: "<< temp <<std::endl;
			// std::cout <<"The DIGITS number for each data is: "<< n <<std::endl;
		}
		std::cout <<"The DIGITS number for each data is: "<< n <<std::endl;
		if(n%2==0)
		{
			digit++;

		}
	}
	std::cout <<"ANWSER: The number of EVEN DIGITS is: "<<digit<<std::endl;
};
