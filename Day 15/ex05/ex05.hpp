/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD15_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD15_ARTHUR_ROBINE_EX03_HPP
#define B_CPP_300_STG_3_1_CPPD15_ARTHUR_ROBINE_EX03_HPP

template<class T>
class array {
public:
    array() {
        _size = 0;
        _array = new T[0];
    }
    array(unsigned int n) {
        _size = n;
        _array = new T[n];
    }
    array(const array<T> &copy) {
        _size = copy._size;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; ++i)
            _array[i] = copy._array[i];
    }
    ~array() {
        if (_array)
            delete[] _array;
    }
    T &operator[](unsigned int a) {
        if (_size <= a) {
            T *newTab = new T[a + 1];
            for (unsigned int i = 0; i < _size; ++i)
                newTab[i] = _array[i];
            _size = a + 1;
            if (_array)
                delete[] _array;
            _array = newTab;
        }
        return _array[a];
    }
    T &operator[](unsigned int a) const {
        if (_size <= a) {
            throw std::exception();
        }
        return _array[a];
    }
    unsigned int size() const {
        return _size;
    }
    array<T> &operator=(const array<T> &val) {
        if (_array)
            delete[] _array;
        _size = val._size;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; ++i)
            _array[i] = val._array[i];
        return *this;
    }
    void dump() const {
        std::cout << "[";
        for (unsigned int i = 0; i < _size; ++i)
            if (i == 0)
                std::cout << _array[i];
            else
                std::cout << ", " << _array[i];
        std::cout << "]" << std::endl;
    }
    template<typename U>
    array<U> convertTo(U(*convert)(const T&)) {
        array<U> convertTab(_size);
        for (unsigned int i = 0; i < _size; ++i)
            convertTab[i] = convert(_array[i]);
        return convertTab;
    }
private:
    T *_array;
    unsigned int _size;
};

template<>
void array<bool>::dump() const {
    std::cout << "[";
    for (unsigned int i = 0; i < _size; ++i) {
        if (_array[i]) {
            if (i == 0)
                std::cout << "true";
            else
                std::cout << ", true";
        } else {
            if (i == 0)
                std::cout << "false";
            else
                std::cout << ", false";
        }
    }
    std::cout << "]" << std::endl;
}

#endif //B_CPP_300_STG_3_1_CPPD15_ARTHUR_ROBINE_EX03_HPP