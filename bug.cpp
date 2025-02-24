std::vector<int> vec = {1, 2, 3};
int* ptr = &vec[0];
vec.push_back(4); // Undefined behavior! The memory pointed by ptr is invalidated.