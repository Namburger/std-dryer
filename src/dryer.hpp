#include <unordered_set>
#include <utility>

namespace dryer {
template <class ForwardIterator, class Type = typename ForwardIterator::value_type>
ForwardIterator dry_it(ForwardIterator first, ForwardIterator last) {
  std::unordered_set<Type> s;
  if (first != last)
    for (ForwardIterator i = first; i != last; ++i)
      if (s.insert(*i).second) *first++ = std::move(*i);
  return first;
}

template <class Container>
void dry(Container& c) {
  auto end = dry_it(c.begin(), c.end());
  c.erase(end, c.end());
}
}  // namespace dryer
