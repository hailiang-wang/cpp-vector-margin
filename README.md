# cpp-vector-margin

给一个vector<int>，比如:

```
    std::vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(11);
    vec.push_back(14);
```


求使用其中的元素，按照顺序组成的range，比如上例：
```
[3,6], [8,9], [11,11], [14,14]
```

[实现](./main.cpp)