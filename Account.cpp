#include "Account.h" //need to include in cpp fiels of hpp files for the use of functions
 #include "Post.h"
 #include "Network.h"
Account::Account()
{
	username = "";
	password = "";
	posts = {}; //vector intiazes to an empty vector
}

Account::Account(const string &username, const string &password)
{
	this->username = username;
	this->password = password;
	this->posts = {};
	//posts = vector_post;
	//generate time somehow
}

void Account::setUsername(const string &user)
{
	this->username = user;
}

string Account::getUsername() const
{
	return username;
}

void Account::setPassword(const string &pass)
{
	this->password = pass;
}

string Account::getPassword() const
{
	return password;
}



   /**
      MODIFY this function to also add the Account username to the Post and then add the Post
      to its Networks feed if it is connected to one. NOTE: you will need to add this
      functionality to the network as well (see Network modifications below - you may want to
      create a STUB for it, or implement this functionality after you modified the Network.)

      @param title   : A reference to the title used to generate the Post object
      @param body    : A reference to the body used to generate the Post object
      @post          : generates a Post with the given title and body and adds it to it's vector
                       of posts AND to the Network's feed if it is connected to a Network.
      @return        : Will return true if the Post does not have an empty title or body and the
                       Post is successfully added to the vector
   */



//help
bool Account::addPost(const string &title, const string &body) //adding a post to vector post if title, body not empty, new post creates
{
	if (!(title.empty() || body.empty()))
	{
		posts.push_back(new Post(this->username,title,body)); // need help dosent compile
		return true;
	}

	return false;
}

void Account::viewPosts()
{
	for (size_t i = 0; i < posts.size(); i++)
	{
		posts[i]->displayPost();
	}
}

//return pointer of network of account
string Account::getNetwork() const{
    return *point;

}

//the Network pointer private member points to the input Network
void Account::setNetwork(string *ptr){
    this->point=ptr;

}

   /**
      @param            :   the username of the Account to follow
      @return           :   true if the account was successfully able to follow, false otherwise
      @post             :   adds the username to the vector of following accounts only if
                            it is affiliated to a Network AND it is not already following an
                            account with the same username.
   */

   //need help
bool Account::followAccount(string user){
    for(int i=0;i<posts.size();i++){
     //   if(users[i]!=user && Network::containsAccount(user)){
           //     users.push_back(i);
         //           return true;
        }
    }
  //  return false;



  /**
      @return           :   the vector of usernames the Account is following
   */

vector<string> Account::viewFollowing(){
    return users;

}


   /**
      Accessor function
      @param            :   a reference to the item whose feed will be displayed
      @post             :   prints the feed of the given account by checking who they are
                            following and displaying all the posts from the feed that were made
                            by those accounts.
                            Keep in mind that the Network parameters are general template types
                            in this project rather than accounts, although this functionality is
                            specific to accounts.
   */
//need help
void Account::printFeedForAccount(string const &item){
    if(followAccount(item)){
            viewFollowing();
            viewPosts();
    }
    cout<<"empty";
}

  /**
      @param            :   a reference to an item (account) and the username of the account
                            it wants to follow
      @return           :   true if the item was authorized to follow, false otherwise

      @post             :   the referenced Account follows another account with the username
                            specified by the second argument if they both exist in the network
   */
//help
bool Account::authenticateFollow(const string &item, string user){
    if((getNetwork()==item && getNetwork()==user) &&(followAccount(item)==followAccount(user))){
        return true;
    }
    return false;

}


   /**
      Mutator function
      @param            :   a reference to a Post be added to the feed
      @return           :   returns true if the Post was successfully added to the feed, false
                            otherwise
      @post             :   Adds the post to its feed only if the Post was created by an Account
                            in this Network.
   */

//help
bool Account::addToFeed(const string &item){
    //if(Network<T>::containsAccount(item) && getNetwork()==item){
     //   return true;
   // }
    return true;
}






