# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_acp_mujoco_simulator_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED acp_mujoco_simulator_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(acp_mujoco_simulator_FOUND FALSE)
  elseif(NOT acp_mujoco_simulator_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(acp_mujoco_simulator_FOUND FALSE)
  endif()
  return()
endif()
set(_acp_mujoco_simulator_CONFIG_INCLUDED TRUE)

# output package information
if(NOT acp_mujoco_simulator_FIND_QUIETLY)
  message(STATUS "Found acp_mujoco_simulator: 0.0.0 (${acp_mujoco_simulator_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'acp_mujoco_simulator' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${acp_mujoco_simulator_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(acp_mujoco_simulator_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${acp_mujoco_simulator_DIR}/${_extra}")
endforeach()
