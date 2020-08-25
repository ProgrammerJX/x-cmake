set(MODULE_NAME base_0)

set(SOURCE_FILES base_0.cxx)
include_directories(. ${X_INCLUDE})
set(HEADER_FILES ${X_INCLUDE}/${MODULE_NAME}/base_0.hpp)
# visual studio
source_group("Header Files" FILES ${HEADER_FILES})

if(X_BUILD_STATIC)
    add_definitions(-D X_BUILD_STATIC)
    add_library(${MODULE_NAME} STATIC ${SOURCE_FILES} ${HEADER_FILES})
else()
    add_definitions(-D BASE_0_Export)
    add_library(${MODULE_NAME} SHARED ${SOURCE_FILES} ${HEADER_FILES})
endif()

set_target_properties(${MODULE_NAME} PROPERTIES FOLDER "base")

install_module(${MODULE_NAME})
