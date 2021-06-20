#include <iostream>
#include <vector>

using namespace std;
//我的第一个方法：把所有元素遍历一遍，答案推荐用hash map不懂
//**************************************************************
// int main() {
// 	vector<int> nums ={3,2,4};
// 	vector<int> result(2);//vector 的元素初始值为0

//     int size= nums.size();
//     cout<<"size: "<<size<<endl;
//     int target=6;
//     int j;
//     int sum=0;

//   	for (int i=0;i<size;i++)
//   	{
//   		j=i+1;
//   		cout<<"***i: "<<i<<" , j: "<<j<<endl;
//   		for (j;j<size;j++)
//   		{
//   			cout<<"**i: "<<i<<" , j: "<<j<<endl;
//   			sum =nums[i]+nums[j];
//   			cout<<"sum: "<<sum<<endl;
//   			if(sum==target)
//   			{ 
//   				cout<<"*i: "<<i<<" , j: "<<j<<endl;
//   				result[0]=i;
//   				result[1]=j;

//   			}

//   	}
  		  
//   	}

//   	for(int k=0;k<2;k++)
//   	{
// 		cout<<"result: "<<result[k]<<endl;
//   	}

// };
//**************************************************************