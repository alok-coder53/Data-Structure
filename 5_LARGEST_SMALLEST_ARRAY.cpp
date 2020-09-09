#include<iostream>
#include<limits.h>
int main()
{
    int size{};
    std::cout<<"Enter the number of elements:";
    std::cin >> size;
    int arr[size]{};
    for(int i=0;i<size;i++)
    {
        std::cin >> arr[i];
    }
    //int largest{arr[0]},smallest{arr[0]};
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if(arr[i]  > largest)
        {
            largest = arr[i];
        }
    }
    std::cout<<"Smallest: " << smallest << "\n";
    std::cout<<"largest: " << largest << "\n";
    return 0;
}