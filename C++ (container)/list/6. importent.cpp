std::list<int> first;
std::list<int> second;

first.assign (7,100);                      // 7 ints with value 100
second.assign (first.begin(),first.end()); // a copy of first

int myints[]={1776,7,4};
first.assign (myints,myints+3);            // assigning from array

int myints[] = {75,23,65,42,13};
std::list<int> mylist (myints,myints+5);
