#ifndef PUPIPUK6_CIRCULARBUFFER_H
#define PUPIPUK6_CIRCULARBUFFER_H

#include "iostream"

template <typename T>
class CircularBuffer {
private:
    T* m_buffer;
    size_t m_capacity;
    size_t m_size;
    size_t m_head;
    size_t m_tail;
public:
    CircularBuffer(size_t capacity = 10) : m_capacity(capacity), m_size(0), m_head(0), m_tail(0) {
        m_buffer = new T[m_capacity];
    }

    ~CircularBuffer() {
        delete[] m_buffer;
    }

    void push_back(const T& value) {
        if (m_size == m_capacity) {
            resize(m_capacity * 2);
        }
        m_buffer[m_tail] = value;
        m_tail = (m_tail + 1) % m_capacity;
        ++m_size;
    }

    void push_front(const T& value) {
        if (m_size == m_capacity) {
            resize(m_capacity * 2);
        }
        m_head = (m_head - 1 + m_capacity) % m_capacity;
        m_buffer[m_head] = value;
        ++m_size;
    }

    void insert(typename std::vector<T>::iterator it, const T& value) {
        size_t index = std::distance(m_buffer, it.base());
        if (m_size == m_capacity) {
            resize(m_capacity * 2);
            it = m_buffer + index;
        }
        if (index >= m_size / 2) {
            for (size_t i = m_tail; i != index; i = (i - 1 + m_capacity) % m_capacity) {
                m_buffer[i] = m_buffer[(i - 1 + m_capacity) % m_capacity];
            }
            m_tail = (m_tail + 1) % m_capacity;
        } else {
            for (size_t i = m_head; i != index; i = (i + 1) % m_capacity) {
                m_buffer[i] = m_buffer[(i + 1) % m_capacity];
            }
            m_head = (m_head - 1 + m_capacity) % m_capacity;
        }
        m_buffer[index] = value;
        ++m_size;
    }

    void pop_back() {
        if (m_size > 0) {
            m_tail = (m_tail - 1 + m_capacity) % m_capacity;
            --m_size;
            if (m_size <= m_capacity / 4) {
                resize(m_capacity / 2);
            }
        }
    }

    void pop_front() {
        if (m_size > 0) {
            m_head = (m_head + 1) % m_capacity;
            --m_size;
            if (m_size <= m_capacity / 4) {
                resize(m_capacity / 2);
            }
        }
    }

    void erase(typename std::vector<T>::iterator it) {
        size_t index = std::distance(m_buffer, it.base());
        if (index >= m_size / 2) {
            for (size_t i = index; i != m_tail; i = (i + 1) % m_capacity) {
                m_buffer[i] = m_buffer[(i + 1) % m_capacity];
            }
            m_tail = (m_tail - 1 + m_capacity) % m_capacity;
        } else {
            for (size_t i = index; i != m_head; i = (i - 1 + m_capacity) % m_capacity) {
                m_buffer[i] = m_buffer[(i - 1 + m_capacity) % m_capacity];
            }
            m_head = (m_head + 1) % m_capacity;
        }
        --m_size;
        if (m_size <= m_capacity / 4) {
            resize(m_capacity / 2);
        }
    }

    T& back() {
        return m_buffer[(m_tail - 1 + m_capacity) % m_capacity];
    }

    const T& back() const {
        return m_buffer[(m_tail - 1 + m_capacity) % m_capacity];
    }

    T& front() {
        return m_buffer[m_head];
    }

    const T& front() const {
        return m_buffer[m_head];
    }

    T& operator[](size_t index) {
        return m_buffer[(m_head + index) % m_capacity];
    }

    const T& operator[](size_t index) const {
        return m_buffer[(m_head + index) % m_capacity];
    }

    void reserve(size_t capacity) {
        if (capacity > m_capacity) {
            resize(capacity);
        }
    }

    void resize(size_t capacity) {
        if (capacity < m_size) {
            throw std::logic_error("New capacity is less than current size");
        }
        T* new_buffer = new T[capacity];
        for (size_t i = 0; i < m_size; ++i) {
            new_buffer[i] = m_buffer[(m_head + i) % m_capacity];
        }
        delete[] m_buffer;
        m_buffer = new_buffer;
        m_capacity = capacity;
        m_head = 0;
        m_tail = m_size;
    }

    size_t size() const {
        return m_size;
    }

    size_t capacity() const {
        return m_capacity;
    }


};

#endif //PUPIPUK6_CIRCULARBUFFER_H