#ifndef LAB2_PREDICATE_H
#define LAB2_PREDICATE_H

#include <vector>
namespace CustomPredicates {

    class Predicate {
        template<typename InputIt, typename UnaryPredicate>
        bool any_of(InputIt first, InputIt last, UnaryPredicate pred);
        template<typename InputIt, typename UnaryPredicate>
        bool is_partitioned(InputIt first, InputIt last, UnaryPredicate pred);
        template<typename BidirIt, typename T>
        BidirIt find_backward(BidirIt first, BidirIt last, const T& value);

        static bool isEven(int &n);
        static int evCount(std::vector<int> &vec);
    };

}
#endif //LAB2_PREDICATE_H
