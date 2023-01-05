
#include <iostream>
#include <set>

int main () {
   std::set<int> myset;
   std::set<int>::iterator itlow,itup;

   for (int i = 1; i < 10; i++) myset.insert(i*10);



   itup = myset.upper_bound (90);

   if(itup==myset.end()){
         myset.erase(myset.begin());
     }
     else{
         myset.erase(itup);
     }

//   myset.erase(itup);

   std::cout << "myset contains:";
   for (std::set<int>::iterator it = myset.begin(); it!=myset.end(); ++it)
      std::cout << ' ' << *it;
   std::cout << '\n';

   return 0;
}
