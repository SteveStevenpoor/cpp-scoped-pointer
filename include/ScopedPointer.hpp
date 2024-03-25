template<typename T>
class ScopedPointer {
    T* pointer;

public:
    ScopedPointer(T* raw) : pointer(raw) {};

    // for Shallow Copy
    // ScopedPointer(const ScopedPointer& other) = delete;

    //for DeepCopy
    ScopedPointer(const ScopedPointer& other) {
        pointer = new T;
        *pointer = *(other.pointer);
    }


    ScopedPointer(ScopedPointer&& other) {
        pointer = other.pointer;
        other.pointer = nullptr;
    }

    ~ScopedPointer() {
        delete pointer;
    }
};