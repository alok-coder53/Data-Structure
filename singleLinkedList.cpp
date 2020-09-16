#include<iostream>
class node
{
    public:
        int m_data{};
        node* next{};
        public:
        node(int data)
        {
            m_data = data;
            next = nullptr;
        }
};
node* takeinput()
{
    int data{};
    std::cin >> data;
    node* head = nullptr;
    node* tail = nullptr;
    while(data != -1)
    {
        node* n = new node(data);
        if(head == nullptr)
        {
            head = tail =n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
        std::cin >> data;
    }
    return head;
}
void print_list(node* head)
{
    node* temp = head;
    while(temp != nullptr)
    {
        std::cout<<temp->m_data<<" ";
        temp = temp->next;
    }
}
int length_ll(node* head)
{
    int count{};
    node* temp = head;
    while(temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void print_pos(node* head,int i)
{
    if(i<0)
    {
        std::cout<<"Index is not valid";
        return;
    }
    int count = 1;
    while(count<=i  && head!=nullptr)
    {
        head = head->next;
        count++;
    }
    if(head)
    {
        std::cout<<"\n"<<head->m_data<<std::endl;
    }
    else
    {
        return;
    }
}

node* insert_pos(node* head,int i,int data)
{
    if(i<0)
    {
        std::cout<<"Index is not valid";
        return head;
    }
    if( i==0 )
    {
        node* n = new node(data);
        n->next = head;
        head = n;
        return head;
    }
    node* copyhead = head;
    int count =1;
    while(count<=i-1 && head!=nullptr)
    {
        head = head->next;
        count++;
    }
    if(head)
    {
        node* n = new node(data);
        node* temp = head->next;
        head->next = n;
        n->next = temp;
        return copyhead;

    }
    return copyhead;
}

node* delete_pos(node* head,int i)
{
    if(i<0)
    {
        std::cout<<"Index is not valid";
        return head;
    }
    if( i==0 && head)
    {
        node* newHead = head->next;
        head->next = nullptr;
        delete head;
        return newHead;
    }
    node* curr = head;
    int count =1;
    while(count<=i-1 && curr!=nullptr)
    {
        curr = curr->next;
        count++;
    }
    if(curr && curr->next)
    {
        node* temp = curr->next;
        curr->next = curr->next->next;
        temp->next = nullptr;
        delete temp;
    }
    return head;
}
int main()
{
    node* head = takeinput();
    print_list(head);
    int length = length_ll(head);
    std::cout<<"\nLength:"<<length<<std::endl;
    print_pos(head,3);
    node* temp = insert_pos(head,3,78);
    print_list(temp);
    node* head1= delete_pos(head,3);
    std::cout<<std::endl;
    print_list(head1);
    return 0;
}