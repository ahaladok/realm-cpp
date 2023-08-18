#include <cpprealm/experimental/managed_numeric.hpp>

namespace realm::experimental {
    __cpprealm_build_experimental_query(==, equal, int64_t)
    __cpprealm_build_experimental_query(!=, not_equal, int64_t)
    __cpprealm_build_experimental_query(>, greater, int64_t)
    __cpprealm_build_experimental_query(>=, greater_equal, int64_t)
    __cpprealm_build_experimental_query(<, less, int64_t)
    __cpprealm_build_experimental_query(<=, less_equal, int64_t)

    __cpprealm_build_experimental_query(==, equal, double)
    __cpprealm_build_experimental_query(!=, not_equal, double)
    __cpprealm_build_experimental_query(>, greater, double)
    __cpprealm_build_experimental_query(>=, greater_equal, double)
    __cpprealm_build_experimental_query(<, less, double)
    __cpprealm_build_experimental_query(<=, less_equal, double)

    __cpprealm_build_experimental_query(==, equal, bool)
    __cpprealm_build_experimental_query(!=, not_equal, bool)

    __cpprealm_build_optional_experimental_query(==, equal, int64_t)
    __cpprealm_build_optional_experimental_query(!=, not_equal, int64_t)

    __cpprealm_build_optional_experimental_query(==, equal, double)
    __cpprealm_build_optional_experimental_query(!=, not_equal, double)

    __cpprealm_build_optional_experimental_query(==, equal, bool)
    __cpprealm_build_optional_experimental_query(!=, not_equal, bool)
}