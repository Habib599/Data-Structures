Vector Built-in Functions:

Constructor
-----------

vector<type>v;   Construct a vector with 0 elements. O(1)
vector<type>v(N); Construct a vector with N elements and the value will be garbage. O(N)
vector<type>v(N,V); Construct a vector with N elements and all the value will be V.O(N)
vector<type>v(v2); Construct a vector by copying another vector v2.O(N)
vector<type>v(A,A+N); Construct a vector by copying all elements from an array A of size N.O(N)


Capacity
--------
	
v.size()Returns the size of the vector.O(1)
v.max_size()Returns the maximum size that the vector can hold.O(1)
v.capacity()Returns the current available capacity of the vector.O(1)
v.clear()Clears the vector elements. size 0 hoye jabe. Do not delete the memory, only clear the value.O(N)
v.empty()Return true/false if the vector is empty or not.O(1)
v.resize()Change the size of the vector. O(K); where K is the difference between new size and current size.


Modifiers
---------

v= or v.assign()Assign another vector.O(N) if sizes are different, O(1) otherwise.
v.push_back()Add an element to the end.O(1)
v.pop_back()Remove the last element.O(1)
v.insert()Insert elements at a specific position.O(N+K); where K is the number of elements to be inserted.
   ex..
    vector<int>v={1,2,3,4,5};
    vector<int>v2={100,101,102,103};
    v.insert(v.begin()+2,v2.begin(),v2.end());

v.erase()Delete elements from a specific position.O(N+K); where K is the number of elements to be deleted.
replace(v.begin(),v.end(),value,replace_value)Replace all the value with replace_value. Not under a vector.O(N)
find(v.begin(),v.end(),V)Find the value V. Not under a vector.O(N)


Element access
--------------

v[i]Access the ith element.O(1)
v.at(i)Access the ith element.O(1)
v.back()Access the last element.O(1)
v.front()Access the first element.O(1)


Iterators
---------

v.begin()Pointer to the first element.O(1)
v.end()Pointer to the last element.O(1)


