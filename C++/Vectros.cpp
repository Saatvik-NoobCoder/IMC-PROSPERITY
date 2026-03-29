#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector <int> vec = {a,v,s,e,w,q,....} here a,v,s,e,w,q represent numbers since data type is int; in case of actual letters use char in ' '
    //          |    |
    //     datatype;nameofvector

    vector <int> vec = {1,2,3,7,4,5,8,9,0}; 
    cout << vec[2] << endl;
    cout <<endl;

    //another method of defining a vector is vector <int> vec (5,0)
    // this creates array of size 5 and each block has 0
    // vectors and arrays are almost similar
    for (int val: vec){
        cout << val << endl; // prints all values in vec
    }

    //Functions in Vectors
    //size: returns size of vector
    cout << endl;
    cout <<"size = "<< vec.size() <<endl;

    //push_back: to enter a value at last block of vector

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(55);
    vec.push_back(65);
    cout <<endl;
    cout << "Size after push back is: " <<vec.size()<<endl;
    cout <<endl;
    //to print all values again we must apply for each loop again;
     //loop in vector
    //for each loop

    for (int val: vec){
        cout << val << endl; // prints all values in vec
    }
    cout << endl;

    //pop_back: this is exactly opposite of push back; to delete the element in last block of vector;
    vec.pop_back(); //65 will be deleted
    for (int val: vec){
        cout << val << endl; // prints all values in vec
    }
    cout << endl;
    //size will become 13


    //front: to print first value of vector
    cout << "First value stored in vector is: " << vec.front() << endl;

    //back: to print last value of vector
    cout << "Last value of vector is: " << vec.back () << endl;

    //at: to get value at a particular vector same as vec [i]
    cout << "Using at function: " << vec.at(7)<< endl;
    cout << "Using vec[i]: " << vec[7] << endl;
   

    //Static vs Dynamic Allocation
    //  Static Allocation - compile time mein hee hojata hai yeh


    //     What It Means:

    //     Memory is allocated at compile time.
    //     Size is fixed and known before the program runs.

    //     Example (Array):
    //int arr[5]; // Static array of size 5
    //      Here:
	// •	Memory for 5 integers is allocated when the program starts
	// •	You cannot change the size at runtime
	// •	Fast and simple — but inflexible



    //     🔴 Dynamic Allocation

// ✅ What It Means:

// Memory is allocated at runtime using a pointer.
// You choose the size based on user input or program logic.

// #include <vector>
// vector<int> v;         // dynamic array
// v.push_back(10);       // dynamically grows... run time mein badha

   

   //size vs capacity
   //when we initially defined vec- it had 9 elements
   //pushback- doubles capacity- therefore 14/18 occupied firstly
   // then we pop_backed -> 13/18

   cout << vec.capacity ()<<endl; // 18
   cout <<vec.size() <<endl; //13





    return 0;

}

