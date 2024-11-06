#include "./../include/linear.hpp"

namespace linear
{
    typedef struct SinglyNode
    {
        int data;
        struct SinglyNode *next;
    } S_Node;

    typedef struct DoublyNode
    {
        int data;
        struct DoublyNode *next;
        struct DoublyNode *previous;
    } D_Node;

    class Array
    {
        private:
            int m_size;
            int *data = (int *) malloc(sizeof(int) * m_size);
        public:
            Array(int size)
            {
                m_size = size;
            }

            void setData()
            {
                std::cout << "Enter data" << std::endl;
                for (int i = 0; i < m_size; i++)
                {
                    std::cout << i+1 << "$> ";
                    std::cin >> data[i];
                }
            }

            void showData()
            {
                for (int i = 0; i < m_size; i++)
                {
                    std::cout << data[i] << std::endl;
                }
            }

            ~Array()
            {
                free(data);
            }
    };

    class Stack
    {
        private:
            S_Node *m_head = nullptr;
        public:
            Stack(int data)
            {
                m_head = (S_Node*) malloc(sizeof(S_Node));
                m_head->data = data;
                m_head->next = nullptr;
            }

            void addData(int howMany)
            {
                for(int i = 0; i < howMany; i++)
                {
                    S_Node *temp = (S_Node*) malloc(sizeof(S_Node));
                    std::cout << "Data: ";
                    std::cin >> temp->data;
                    temp->next = m_head;
                    m_head = temp;
                }
            }

            void showData()
            {
                for(S_Node *temp = m_head; temp != nullptr; temp->next)
                {
                    std::cout << temp->data << std::endl;
                }
            }

            void deleteData(int whichData)
            {
                S_Node *temp, *oneStepBehind;
                for ( temp = m_head; (temp != nullptr) && (temp->data != whichData); temp = temp->next)
                {
                    oneStepBehind = temp;
                }

                if (temp == nullptr)
                {
                    std::cout << "Data does not exist" << std::endl;
                    return;
                }
                
                if (temp->data == whichData)
                {
                    oneStepBehind->next = temp->next;
                    free(temp);
                    std::cout << "Deleted the data" << std::endl;
                    return;
                }
            }
    };

    // Incomplete
    class Queue
    {
        public:
            Queue();
            void addData(int howMany);
            void showData();
            void deleteData(int whichData);
    };

    class SinglyLinkedList
    {
        private:
            S_Node *m_head;
        
        public:
            SinglyLinkedList(int data)
            {
                m_head = (S_Node*) malloc(sizeof(S_Node));
                m_head->next = nullptr;
                m_head->data = data;
            }
            
            void addData(int data)
            {
                S_Node *temp = (S_Node*) malloc(sizeof(S_Node));
                temp->data = data;
                temp->next = nullptr;

                // Temporary place to point to by variable, that is to be used as a place where we store the final data
                S_Node *temporary;
                for (temporary = m_head; temporary->next != nullptr; temporary = temporary->next )
                {}
                // Storing the pointer to where we actually needed to
                temporary->next = temp;
            }

            void showData()
            {
                int i = 1;
                for(S_Node *temp = m_head; temp != nullptr; temp = temp->next)
                {
                    std::cout << "Data " << i << ": " << temp->data << std::endl;
                    i++;
                }
            }
            
            void deleteData(int data)
            {
                S_Node *temp, *oneStepBehind;
                for (temp = m_head; (temp != nullptr) && (temp->data != data); temp->next)
                {
                    oneStepBehind = temp;
                }

                if (temp == nullptr)
                {
                    std::cout << "Data does not exist" << std::endl;
                    return;
                }
                
                if (temp->data = data)
                {
                    oneStepBehind->next = temp->next;
                    free(temp);
                    std::cout << "Data deleted" << std::endl;
                    return;
                }
            }
            
            void searchData(int data)
            {
                S_Node *temp;
                for (temp = m_head; (temp != nullptr) && (temp->data != data); temp->next)
                {}

                if (temp == nullptr)
                {
                    std::cout << "Data does not exist" << std::endl;
                    return;
                }

                if (temp->data = data)
                {
                    std::cout << "Data exists" << std::endl;
                }

            }
    };

    class DoublyLinkedList
    {
        private:
            D_Node *m_head;
        
        public:
            DoublyLinkedList(int data)
            {
                m_head = (D_Node*) malloc(sizeof(D_Node));
                m_head->next = nullptr;
                m_head->data = data;
                m_head->previous = nullptr;
            }

            void addData(int data)
            {
                D_Node *temp = (D_Node*) malloc(sizeof(D_Node));
                temp->data = data;
                temp->next = nullptr;
                temp->previous = nullptr;

                // Temporary place to point to by variable, that is to be used as a place where we store the final data
                D_Node *temporary;
                for (temporary = m_head; temporary->next != nullptr; temporary = temporary->next )
                {}
                // Storing the pointer to where we actually needed to
                temporary->next = temp;
                temp->previous = temporary;
            }

            void showData()
            {
                for (D_Node *temp = m_head; temp != nullptr; temp = temp->next)
                {
                    std::cout << temp->data << std::endl;
                }
            }

            void deleteData(int data)
            {
                D_Node *temp, *oneStepBehind;
                for (temp = m_head; (temp != nullptr) && (temp->data != data); temp->next)
                {
                    oneStepBehind = temp;
                }

                if (temp == nullptr)
                {
                    std::cout << "Data does not exist" << std::endl;
                    return;
                }
                
                if (temp->data = data)
                {
                    oneStepBehind->next = temp->next;
                    temp->next->previous = oneStepBehind;
                    free(temp);
                    std::cout << "Data deleted" << std::endl;
                    return;
                }
            }

            void searchData(int data)
            {
                D_Node *temp;
                for (temp = m_head; (temp != nullptr) && (temp->data != data); temp->next)
                {}

                if (temp == nullptr)
                {
                    std::cout << "Data does not exist" << std::endl;
                    return;
                }

                if (temp->data = data)
                {
                    std::cout << "Data exists" << std::endl;
                }
            }

    };

    // Incomplete
    class HashTable
    {};
};
