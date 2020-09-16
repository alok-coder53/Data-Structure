#include<iostream>
int main()
{
    int arr[100]{};
    for(int i=0;i<100;i++)
    {
        arr[i] = i*10;
    }
    int sum{};
    for(int i=0;i<100;i++)
    {
        sum += arr[i];
    }
    std::cout<<"Sum: " << sum;
    std::cout<<std::endl;
    return 0;
}