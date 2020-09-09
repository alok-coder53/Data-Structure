#include<iostream>
int main()
{
    int size{};
    std::cout<<"Enter the number of elements:";
    std::cin >> size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        arr[i] = i*10;
    }
    int start = 0;
    int end = size-1;
    while(start<end)
    {
        std::swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(auto elem:arr)
    {
        std::cout<<elem<<" ";
    }
    return 0;
}