# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ariac_sensors_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ariac_sensors_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ariac_sensors_FOUND FALSE)
  elseif(NOT ariac_sensors_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ariac_sensors_FOUND FALSE)
  endif()
  return()
endif()
set(_ariac_sensors_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ariac_sensors_FIND_QUIETLY)
  message(STATUS "Found ariac_sensors: 0.0.0 (${ariac_sensors_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ariac_sensors' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${ariac_sensors_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ariac_sensors_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${ariac_sensors_DIR}/${_extra}")
endforeach()
