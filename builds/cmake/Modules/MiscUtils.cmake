
# check if we are a submodule
if(${CMAKE_CURRENT_SOURCE_DIR} STREQUAL ${CMAKE_SOURCE_DIR})
	set(LIBLCF_MAIN_PROJECT ON)
else()
	set(LIBLCF_MAIN_PROJECT OFF)
endif()

# prevent in-source builds
if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
	message(FATAL_ERROR "In-source builds are disabled.")
endif()
