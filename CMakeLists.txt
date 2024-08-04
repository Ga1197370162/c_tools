CMAKE_MINIMUM_REQUIRED(VERSION 3.28)

PROJECT(c_tools LANGUAGES C CXX)

SET(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING "build_type")
SET(CMAKE_SKIP_RPATH TRUE)

IF (MSVC)
  ADD_COMPILE_OPTIONS(/std:c++14)
  SET(CMAKE_C_FLAGS   "${CMAKE_C_FLAGS}   /MP /wd4200")
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP /wd4200 /std:c++14")
ELSEIF (UNIX)
  SET(CMAKE_C_FLAGS   "${CMAKE_C_FLAGS}  -g -Wall -fPIC -pipe -std=gnu90 -pthread -lrt")
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -fPIC -pipe -std=c++14 -fno-exceptions -Wno-invalid-offsetof -pthread -lrt")
ENDIF()

ADD_SUBDIRECTORY(${C_TOOLS_ROOT}/src)