#include "Network.h"


 /**

      Default constructor.


      Initializes private variables to default initial values.

   */

template<class T>
Network<T>::Network()
{
    this->count_accounts=0;
    this->array=200;
    this->posts=0;
}

//- A function that returns the index of a given account within the Network.
/**

   private function

   @param            :   string - the username of item we want the index of

   @return           :   int - the index of the item, -1 if the account is not found

*/

//getIndexOf

template<class T>
int Network<T>::getIndexOf(T user){
    bool found = false;
  int result = -1;
  int search_index = 0;

   // If the bag is empty, item_count_ is zero, so loop is skipped
   while (!found && (search_index < count_accounts))
   {
      if (array[search_index] = user)
      {
         found = true;
         result = search_index;
      }
      else
      {
         search_index++;
      }  // end if
   }  // end while

   return result;
}

  /**

      Accessor function

      @return           : int -  the current size of the network (number of items in the array)

   */

template<class T>
int Network<T>::getSizeOfNework(){
    return count_accounts;
}

/**

      @return           : bool -  true if the bag is empty, false otherwise

   */

template<class T>
bool Network<T>::isEmpty(){
    return count_accounts=0;
}

/**

      @param            : a POINTER to the item that will be added to the Network

      @return           : bool- true  if the item was successfully added, false otherwise

      @post             : stores a pointer to the item, if there is room. This is a network

                          specific function,

                          it has an additional constraint: the item will be added only if no

                          other item in the network

                          has the same username (usernames are considered unique)

                          REMEMBER WE ARE STORING POINTERS TO ITEMS, NOT ITEMS.

                          Finally, the Account being added to the network will update it's

                          private member to point to this network

                          (see Account class modifications below, you may come back and implement

                          this feature after

                          you work on Task 2, but don't forget!!!).

                          NOTE: every object in C++ has access to a pointer to itself called

                          `this`, thus the nework can pass `this` pointer to the account!

   */

//not finished need to do private member point
template<class T>
bool Network<T>::addAccount(T *item){
bool has_room = (count_accounts < 200);
    for(int i=0;i<sizeof(array)/sizeof(array[0]);i++){
        if(array[i]!=&item && has_room){
               array[count_accounts] = &item;
		       count_accounts++;
               return true;
        }
    }
	return false;
}

/**

      Mutator function

      @param            :   a POINTER to the item that will be removed from Network

      @return           :   true if if the item was successfully removed, false otherwise

      @post             :   updates the bag/network to remove the pointer, if a pointer to that

                            item was found.

   */
template<class T>
bool Network<T>::removeAccount(T *item){
    int found_index = getIndexOf(&item);
	bool can_remove = !isEmpty() && (found_index > -1);
	if (can_remove)
	{
		count_accounts--;
		array[found_index] = array[count_accounts];
	}  // end if

	return can_remove;
}

 /**

      Mutator function

      @post             :   Empties the bag/network

   */

template <class T>
void Network<T>::clear(){
    count_accounts=0;
}



   /**

      @param            :   a POINTER to the item to find

      @return           :   true if the item was successfully found, false otherwise

   */


template<class T>
bool Network<T>::containsAccount(T *item){
    return getIndexOf(&item) > -1;

}


/**
      Mutator function
      @param            :   the name of an input file
      @pre              :   The format of the text file is as follows:
                            username password
                            username password
                            ;

                            where ';' signals the end of the file. Check the provided example
                            (accounts.txt).

      @post             :   Reads every line in the input file, creates an Account from that
                            information and
                            adds the Account to the network. If a line of input is missing some
                            required information,
                            it prints out "Improper Format" and terminates.
                            Keep in mind that, although the input will always be an Account, the
                            Network class is
                            a template, thus it will store a pointer to a generic type. It will
                            do so by creating a new
                            dynamic object of type ItemType but passing the account information
                            (username and password)
                            as to the Account constructor. This is a bit hacky, but it will work
                            for our Network.


   */
template<class T>
void Network<T>::populateNetwork(T file){
    file="accounts.txt";
    ifstream Readfile;
    Readfile.open(file);
    if(!Readfile.is_open()){
        exit(EXIT_FAILURE);
    }
    string user, pass;
    while((Readfile>>user>>pass)){
        if(user=="" && pass==""){
            cout<<"Improper Format"<<endl;
        }
        else{
            addAccount(file);
        }
    }
    Readfile.close();
}



 /**
      Mutator function
      @param            :   a reference to another Network

      @post             :  Removes from the Network any items that also appear in the other
                            Network.
                           In other words, removes elements from the network on the left of the
                           operator that are also found in the network on the right of the
                           operator.
                            Why is this useful? For example, given a network of known bot
                            accounts, remove all bots from this Network.
   */

//operator-=

