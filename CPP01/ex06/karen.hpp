#ifndef KAREN_H
#define KAREN_H

#include <iostream>
#include <string>

class   karen
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        karen();
        void complain( std::string level );
        ~karen();
};

#endif