# std-dryer
 
 # Definition:
  DRY: Donot Repeat Yourself
  
 # Example
 ```
   std::vector<int> t1 = {1, 3, 4, 3, 2, 3, 5};
   std::cout << "before drying:\n";
   for (auto i : t1) std::cout << i << " ";
   std::cout << "\n";
   dryer::dry(t1);
   std::cout << "after drying\n";
   for (auto i : t1) std::cout << i << " ";
 ```
 
 # non-disclaimer
  std::dryer is used in combination with std::rotate to support std::launder
  (too bad it's not really is)
  
  # disclaimer
  it's not quite in namespace std yet :/ but you can still use it in namespace dryer
