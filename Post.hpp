// declaring Post fucntions
#ifndef _POST_H_
#define _POST_H_

#include <time.h>

#include <string>
#include <iostream>
#include <vector>

//A string representing the username of the Account that created it.
//This will be useful in future projects

  /**
      Parameterized constructor.
      @param      : The title of the post (a string)
      @param      : The body content of the post (a string)
      @param      : The username of the Account that added this post (a string)
      @post         : Sets the title, body and username to the value of the parameters
                      It will also generate the current time and store it
   */

/*
   Accessor Function
   @return       : username associated with this Post
*/
//getUsername

/*
   Mutator Function
   @param        : a reference to the username associated with this Post
*/
//setUsername

using namespace std;

class Post
{
private:
    string title;
    string body;
    time_t times; // declaring time variable
    string user;

public:
    Post();
    Post(string name, string body, string user); // parameters as references, const because they dont change value
    void setUsername(const string &user);
    void setTitle(const string &title); // parameters as references, const because they dont change value
    void setBody(const string &body);   // parameters as references, const because they dont change value
    string getUsername() const;
    string getTitle() const;
    string getBody() const;
    void getTimeStamp() const;
    void displayPost() const;
};

#endif
