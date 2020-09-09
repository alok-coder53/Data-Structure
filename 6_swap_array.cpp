#include<iostream>


namespace alok{
    void swap(int& num1,int& num2)
    {
        int temp{};
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
}
int main()
{
    int num1{},num2{};
    std::cout<<"Enter the num1:";
    std::cin >> num1;
    std::cout<<"Enter the num2:";
    std::cin >> num2;
    std::swap(num1,num2);
    alok::swap(num1,num2);
    std::cout << num1 << " "<< num2<<std::endl;
    return 0;
}