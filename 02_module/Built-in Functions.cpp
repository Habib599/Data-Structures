Vector Built-in Functions:

Constructor
-----------

      vector<type>v;
      vector<type>v(N); ---- N elements and the value will be garbage.  O(N)
   ** vector<type>v(N,V); ---- N elements and all the value will be V.  O(N)
      vector<type>v(v2); Construct a vector by copying another vector v2.O(N)
   ** vector<type>v(A,A+N); Construct a vector by use array A of size N. O(N)


Capacity
--------
	
   ** v.size()
      v.max_size()Returns the maximum number the vector can hold. int(1073741823)
      v.capacity() It represents the reserved number of memory------ (0,1,2,4,8)
   ** v.clear()Clears the vector elements. size 0 hoye jabe.--------O(N)
   ** v.empty()Return true/false if the vector is empty or not
   ** v.resize()Change the size of the vector.
               resize 5->2 or 2->5 --other all value 0
                                   --v(5,7)other all value 7


Modifiers
---------

   ** v= or v.assign() onno vector value v er vitor niye asa.O(N) if sizes are different
      v.push_back()
      v.pop_back()
   ** v.insert()Insert elements at a specific position.O(N+K)
         ex..
         vector<int>v={1,2,3,4,5};
         vector<int>v2={100,101,102,103};
         v.insert(v.begin()+2,v2.begin(),v2.end());

   ** v.erase()Delete elements from a specific position.O(N+K); where K is the number of elements to be deleted.
         ex; v.erase(v.begin()+1,v.end()-1);
   ** replace(v.begin(),v.end(),value,replace_value)Replace all the value with replace_value. Not under a vector.O(N)
   ** find(v.begin(),v.end(),V)Find the value V. Not under a vector.O(N)


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


