module;

#include <string>

export module mymodule;

export extern "C++" {
#define USING_MODULES
#include "mymodule.hpp"
}
