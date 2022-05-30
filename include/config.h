#pragma once

#if defined(_WIN32)
#   if defined(LEET_EXPORT)
#       define LEET_API __declspec(dllexport)
#   elif defined(LEET_STATIC)
#       define LEET_API
#   else
#       define LEET_API __declspec(dllimport)
#   endif
#else
#   if defined(LEET_EXPORT)
#       define LEET_API __attribute__((visibility("default")))
#   elif defined(LEET_STATIC)
#       define LEET_API
#   else
#       define LEET_API __attribute__((visibility("default")))
#   endif
#endif
