#include "mutanstack.hpp"

int main(){
    {    
        std::cout << "----my mutantStack results: \n";
        MutantStack<int>    mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator itt = mstack.begin();
        MutantStack<int>::iterator itte = mstack.end();
        ++itt;
        --itt;
        while(itt != itte)
        {
            std::cout << *itt << std::endl;
            ++itt;
        }
        //better tests
        std::cout<<"--------better tests\n";
        MutantStack<int>::reverse_iterator it = mstack.rbegin();
        MutantStack<int>::reverse_iterator ite = mstack.rend();
        ++it;
        --it;
        while(it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }

    {
        std::cout << "*************************\n-----a vector results: \n";
        std::vector<int>    mstack;
        mstack.push_back(5);
        mstack.push_back(17);
        std::cout << mstack.back() << std::endl;
        mstack.pop_back();
        std::cout << mstack.size() << std::endl;
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        //[...]
        mstack.push_back(0);
        std::vector<int>::iterator it = mstack.begin();
        std::vector<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while(it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        //better tests
        std::cout<<"----------better tests\n";
        std::vector<int>::reverse_iterator itt = mstack.rbegin();
        std::vector<int>::reverse_iterator itte = mstack.rend();
        ++itt;
        --itt;
        while(itt != itte)
        {
            std::cout << *itt << std::endl;
            ++itt;
        }
    }

    return 0;
}
