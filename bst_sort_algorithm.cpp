#include <iostream>

template <typename iterator>
void bubble_sort(iterator begin, iterator end) // with iterators
{
    bool true_ = true;
    for(iterator i = begin ; i != end; ++i) {
        for(iterator j = begin; j < end; ++j) {
            if (*i < *j) {
                true_ = false;
                std::swap(*i, *j);
            }
        }
        if(true_) {return;}
    }
}
template <typename T>
void bubble_sort(T* arr,int size) // implemented for a simple array
{
    bool _true = true;
    for(int i = 0; i < size; ++i) {
        for(int j = 0;j < size;++j) {
            if(arr[j] > arr[j+1]) {
                std::swap(arr[j],arr[j+1]);
                _true = false;
            }
        }
        if(_true) {
            break;
        }
    }
}
