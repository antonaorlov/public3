#ifndef _NETWORK_H_
#define _NETWORK_H_

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

template<class T>

class Network{

    private:
        T *array[200];
        int count_accounts;
        vector <string> posts;
        int getIndexOf(T user);

    public:
        Network();
        int getSizeOfNework();
        bool isEmpty();
        bool addAccount(T *item );
        bool removeAccount(T *item);
        void clear();
        bool containsAccount(T *item);
        void populateNetwork(T file); //paramet idk
        void setoperator();

};



#endif
