
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

 #include "Post.h"

#include <vector>
#include <string>

using namespace std;
class Account
{
//making variables in consructur and intiazes to user specification
private:
    string username;
    string password;

    vector<Post *> posts; //making posts a vector of class posts
    vector<string> users;

    string *point=nullptr;
   // string *ptr=&point;

public:
    Account();
    Account(const string &username, const string &password); // parameters as references, const because they dont change value
    void setUsername(const string &username);
    string getUsername() const;
    void setPassword(const string &password);
    string getPassword() const;
   // bool addPost(const string &title, const string &body,const string &user);
    void viewPosts();

    string getNetwork() const;
    void setNetwork(string *ptr);


    bool followAccount(string user);
    vector<string> viewFollowing();

    bool addPost(const string &title, const string &body);
    void printFeedForAccount(string const &item);

    bool authenticateFollow(const string &item, string user);
    bool addToFeed(const string &item);
};
#endif
