// cout<<songtue;
//cout<<thanhnga; 
#include<iostream>
using namespace std;
class ArrayCalculator
{
	public:
    static int sumOfArray(int arr[], int n)
    {
        int count = 0;
        for(int i = 0; i<n; i++)
            {
                count = count + arr[i];
            }
            return count;
    }
    static double sumOfArray(double arr[], int n)
    {
        double sum = 0;
        for(int i=0; i<n; i++)
            {
                sum += arr[i];
            }
            return sum;
    }
};
int main()
{
	int arr1[]= {3, 4, 2};
	double arr2[]= {1.3, 4.2, 6.7};
	cout<<ArrayCalculator::sumOfArray(arr1, sizeof(arr1))/sizeof(int)<<endl;
	cout<<ArrayCalculator::sumOfArray(arr2, sizeof(arr2)/sizeof(double))<<endl;
	return 0;
}
