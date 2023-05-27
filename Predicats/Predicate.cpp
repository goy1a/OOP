#include "Predicate.h"
#include <algorithm>
#include <iterator>
namespace CustomPredicates {
    template<typename InputIt, typename UnaryPredicate>
    bool CustomPredicates::Predicate::any_of(InputIt first, InputIt last, UnaryPredicate pred) {
        return std::find_if(first, last, pred) != last;
    }

    template<typename InputIt, typename UnaryPredicate>
    bool CustomPredicates::Predicate::is_partitioned(InputIt first, InputIt last, UnaryPredicate pred) {
        auto it = std::find_if_not(first, last, pred);
        return std::all_of(it, last, pred);
    }


    template<typename BidirIt, typename T>
    BidirIt CustomPredicates::Predicate::find_backward(BidirIt first, BidirIt last, const T& value) {
        auto it = std::find(std::reverse_iterator<BidirIt>(last), std::reverse_iterator<BidirIt>(first), value);
        return (it == std::reverse_iterator<BidirIt>(first)) ? last : --it.base();
    }

    bool Predicate::isEven(int &n) {
        return n % 2 == 0;
    }

    int Predicate::evCount(std::vector<int> &vec) {
        int c = 0;
        for(auto &num: vec){
            if(isEven(num)) c++;
        }
        return c;
    }


}