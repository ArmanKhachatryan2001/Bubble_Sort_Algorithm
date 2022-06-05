#include <iostream>

template <typename iterator>
void bubbl_sort(iterator begin, iterator end)
{
    bool true_ = true;
    for(iterator i = begin; i != end; ++i) {
    for(iterator j = begin; j < i; ++j) {
    if (*i < *j) {
    true_ = false;
    std::swap(*i, *j);
    }
    }
    if(true_) {return;}
    }
}
template <typename T>
void sort(T* arr,int size)
{
    for(int i = 0; i < size; ++i) {
    int j = i;
    while(j < size){
    if(arr[j] > arr[j+1]) {
    T my_swap = arr[j];
    arr[j] = arr[j+1];
    arr[j+1] = my_swap;
    }
    ++j;
    }
    }
}
int main()
{
    return 0;
}
