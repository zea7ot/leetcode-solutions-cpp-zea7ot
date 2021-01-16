 #include <vector>
 
 using namespace std;
 
 class FakeNestedInteger {
    public:
      // Constructor initializes an empty nested list.
      FakeNestedInteger();
 
      // Constructor initializes a single integer.
      FakeNestedInteger(int value);
 
      // Return true if this NestedInteger holds a single integer, rather than a nested list.
      bool isInteger() const;
 
      // Return the single integer that this NestedInteger holds, if it holds a single integer
      // The result is undefined if this NestedInteger holds a nested list
      int getInteger() const;
 
      // Set this NestedInteger to hold a single integer.
      void setInteger(int value);
 
      // Set this NestedInteger to hold a nested list and adds a nested integer to it.
      void add(const FakeNestedInteger &ni);
 
      // Return the nested list that this NestedInteger holds, if it holds a nested list
      // The result is undefined if this NestedInteger holds a single integer
      const vector<FakeNestedInteger> &getList() const;
  };