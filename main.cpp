#include <iostream>
#include "Account.h"
#include "Post.h"
#include "Network.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    cout << "Hello world!" << endl;



    //testing Network class
    Network<string>Net();

    //testing getIndexOf()
    string nom="users";
    //Network<int>getIndexOf(nom);  help

    //test getSizeOfNetwork;
    Network<int>getSizeOfNetwork();

    //test isEmpty()
    Network<bool>isEmpty();

    //test addAccount
   // Network<bool>addAccount(nom);

    //test removeAccount
   // Network<bool>removeAccount("nom");

    //test clear function
    Network<void>clear();

    //test containsAccount
   // Network<string>containsAccount(nom);

   //tesr populateNetwork
   //Network<string>populateNetwork("accounts.txt")













    // Test Constructor and mutator functions
       Account yash;
       yash.setUsername("yashi");
       yash.setPassword("testing123");

      // Test accessor functions:
       cout << yash.getUsername() << endl;
       cout << yash.getPassword() << endl;

       //Test parameterized constructor
       Account lenti("lenti", "testing456");
       cout << endl << lenti.getUsername() << endl;
       cout << lenti.getPassword() << endl << endl;

       //testing viewPost fucntion
       yash.viewPosts();

       //testing setNetwork function
       string *ptr;
       yash.setNetwork(ptr);

       //testing getNetwork function
       yash.getNetwork();

       //test followAccount()
       string user="users";
       string item="item";
       yash.followAccount(user);

       //test viewFollowing()
       yash.viewFollowing();

       //test printFeedForAccount function
       yash.printFeedForAccount(user);

       //test authenticateFollow()
       yash.authenticateFollow(item, user);

       //test addToFeed
       yash.addToFeed(item);









}
