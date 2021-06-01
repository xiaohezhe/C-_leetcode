#include <iostream>
#include <algorithm>  //swap
#include <vector>

using namespace std;
//算出0前面有几个1知道遇到0，选出1最多的数再加1（由0变的1）

int main() {

	vector<int> nums ={1,0,1,1,0};
	int size=nums.size();
    //two pointers as a window, right pointer increases until there are two 0 in window, 
    //and left pointer moving forward also
    int left=0;
    int right=0;
    int zero_num=0;
    int one_num=0;

    while(right<size)
    {
;
        cout<< "right: "<< right<<endl;
        if(nums[right]==0)
        {
            zero_num++;
        }

        while(zero_num==2)
        {
            if(nums[left]==0)
            {

                zero_num--;
            }
            left++;
        }




        one_num=max(one_num,right-left+1);    
        cout<< "*right: "<< right<<endl;
        cout<< "*left: "<< left<<endl;
        cout<< "*zero_num: "<< zero_num<<endl;
        cout<< "*one_num: "<< one_num<<endl;
        right++;
    }
    cout<< "one_num: "<< one_num<<endl;



};