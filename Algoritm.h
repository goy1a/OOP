#ifndef PUPIPUK5_ALGORITM_H
#define PUPIPUK5_ALGORITM_H

class Algoritm {
public:
    template <class InputIterator, class UnaryPredicate>
    static bool none_of(InputIterator first, InputIterator last, UnaryPredicate pred);

    template <class InputIterator, class UnaryPredicate>
    static bool any_of(InputIterator first, InputIterator last, UnaryPredicate pred);

    template <class InputIterator, class UnaryPredicate>
    bool all_of (InputIterator first, InputIterator last, UnaryPredicate pred);

};


#endif //PUPIPUK5_ALGORITM_H
