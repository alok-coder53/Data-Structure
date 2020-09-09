#include<iostream>


int main()
{
    int size{};
    std::cout<<"Enter the size:";
    std::cin >> size;
    int arr[size]{};
    for(int i=0;i<size;i++)
    {
        arr[i] = i*10;
    }
    for(int i=0;i<size;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    for(int i=size-1;i>=0;i--)
    {
        std::cout<<arr[i] << " ";
    }
    return 0;
}