#include "mutanstack.hpp"

/* what if you did :
    mutantstack<int> a;
    insert into a ..etc;
    do some trics with a::iterator
    mutantstack<int> b;
    insert into b..etc;
    a = b;
    try to check *a::iterator and do some trics with it
    here I am checking if the _m inside the iterator class will change to the new affected object b !!
*/



int main(){
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
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while(it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout<<"check the adress of top \n";;
    MutantStack<int>    temp = mstack;
    return 0;
}

/*
typedef std::stack<T>::container_type::iterator it;
difrence between typename typedef

template<class T, >
class stack
{

}*/
