#ifndef libnstd_tree_node_hpp
#define libnstd_tree_node_hpp

#include <memory>

namespace nstd {

    template <class T>
    class tree_node {
    public:
        T value;
        std::shared_ptr<tree_node<T>> unode;
        std::shared_ptr<tree_node<T>> lnode;
        std::shared_ptr<tree_node<T>> rnode;
        tree_node(T const& = T(), std::shared_ptr<tree_node<T>> = nullptr);
    };

    template <class T>
    using tree_node_ptr = std::shared_ptr<tree_node<T>>;
    
}



template <class T>
nstd::tree_node<T>::tree_node(T const& v,
                              std::shared_ptr<tree_node<T>> n
                              ) : value(v), unode(n) {
    
}

#endif
