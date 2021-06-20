#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> nums ={2,7,11,15};
	vector<int> result(2);//vector 的元素初始值为0

    int size= nums.size();
    cout<<"size: "<<size<<endl;
    int target=9;
    int p1=0;
    int p2=size-1;
    int sum=0;

//p1从数列左边开始右移,p2从数列右边开始左移，如果p1+p2 小于 target 值，p1继续右移；
//如果p1+p2 大于 target 值，p2继续左移；
//************************************************************************
//我第一次写的答案
 //   	while((nums[p1]+nums[p2])!=target)
	// {
	//     if(nums[p1]+nums[p2]<target)
	//     {
	//     	p1++;
	//     }
	//     else
	//     {
	//     	p2--;
	//     }
	// }
//************************************************************************
//leetcode101的答案
	while(p1<p2)
	{
		sum = nums[p1]+nums[p2];
		if(sum ==target)
		{
			break;
		}
		else if( sum > target)
		{
			p2--;
		}
		else
		{
			p1++;
		}
	}
	result[0]=p1+1;
	result[1]=p2+1;


  	for(int k=0;k<2;k++)
  	{
		cout<<"result: "<<result[k]<<endl;
  	}

};
