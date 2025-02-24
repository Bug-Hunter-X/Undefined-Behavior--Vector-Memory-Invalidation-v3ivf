std::vector<int> vec = {1, 2, 3};
for (int& x : vec) {  // Use iterators or range-based for loop
    x *= 2;
}
vec.push_back(4); //This is fine now
for (int x : vec) {
    std::cout << x << " ";
}
std::cout << std::endl; 