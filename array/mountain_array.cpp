class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
	int size= arr.size();
	int pre=0;
	int flag_inc=0;
	int flag_dec=0;


	for (int i=1; i<size; i++)
	{
		if (arr[i]>arr[pre])
		{
        if (flag_dec == 0){// this guard if for the case of {0,1,2,1,2}, a mountain and a valley
			pre++;
			flag_inc=1;
			cout<<"i: "<< i<< " , pre: "<< pre<<" flag_inc: "<< flag_inc << endl;
        } else {
            flag_inc = 0;
        }

		}
		if((flag_inc==1)&&(arr[i]< arr[pre]))// this flag if for the case of {3,2,1,2,3} a valley
		{
			
			pre++;
			flag_dec=1;
			cout<<"**i: "<< i<< " , **pre: "<< pre<<" flag_dec: "<< flag_dec << endl;
		}
		if(pre==size-1 && flag_inc==1 && flag_dec==1)
		{
			return true;
		}
    }
        return false;
    }
};