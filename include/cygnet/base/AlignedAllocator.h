#ifndef H15943CA0_9870_434B_9D2A_27B8587E79A8
#define H15943CA0_9870_434B_9D2A_27B8587E79A8

#include <cygnet/cygnet.h>
#include <cstdlib>
#include <cstddef>

CYGNET_NS_BEGIN

template <typename T, std::size_t Alignment>
struct AlignedAllocator
{
    typedef T value_type;
    typedef T* pointer;
    typedef std::size_t size_type;
    typedef std::ptrdiff_t difference_type;
    typedef T& reference;
    typedef const T& const_reference;
    typedef const T* const_pointer;

    template <typename U>
    struct rebind
    {
        typedef AlignedAllocator<U, Alignment> other;
    };

    aligned_allocator() {}

    template <typename U>
    AlignedAllocator(const AlignedAllocator<U, Alignment>&)
    {}

    const_pointer address(const_reference value) const
    {
        return std::addressof(value);
    }

    pointer address(reference value) const
    {
        return std::addressof(value);
    }

    pointer allocate(size_type size, const void* = nullptr)
    {
        return static_cast<pointer>(
                aligned_alloc(Alignment, sizeof(T) * size));
    }

    size_type max_size() const
    {
        return ~static_cast<std::size_t>(0) / sizeof(T);
    }

    void deallocate(pointer p, size_type)
    {
        aligned_free(p);
    }

    template<class U, class V>
    void construct(U* p, const V& value)
    {
        ::new((void*)p) U(value);
    }

    template<class U, class... Args>
    void construct(U* p, Args&&... args)
    {
        ::new((void*)p) U(std::forward<Args>(args)...);
    }

    template<class U>
    void construct(U* p)
    {
        ::new((void*)p) U();
    }

    template<class U>
    void destroy(U* p)
    {
        p->~U();
    }

private:
    void* aligned_alloc(size_type align, size_type size) const
    {
        void* p;
        if (::posix_memalign(&p, align, size) != 0)
        {
            p = 0;
        }
        return p;
    }

    void aligned_free(pointer ptr)
    {
        ::free(ptr);
    }
};

template<typename T1, typename T2, std::size_t alignment>
inline bool operator==(const AlignedAllocator<T1, alignment>&, const AlignedAllocator<T2, alignment>&)
{
    return true;
}

template<typename T1, typename T2, std::size_t alignment>
inline bool operator!=(const AlignedAllocator<T1, alignment>&, const AlignedAllocator<T2, alignment>&)
{
    return false;
}

CYGNET_NS_END

#endif
