set(MODULE_NAME base_1)

# SOURCE FILES
set(SOURCE_FILES base_1.cxx)
# HEADER FILES
include_directories(. ${X_INCLUDE})
set(HEADER_FILES )
# visual studio
source_group("Header Files" FILES ${HEADER_FILES})
# LINK DIRECTORIES
set(LINK_DIRS ${CMAKE_INSTALL_LIBDIR})
link_directories(${LINK_DIRS})
# LIB FILES
set(LINK_LIBS base_0)

if(X_BUILD_STATIC)
    add_definitions(-D X_BUILD_STATIC)
else()
    add_definitions(-D BASE_0_Export)
endif()

add_executable(${MODULE_NAME} ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(${MODULE_NAME} ${LINK_LIBS})
set_target_properties(${MODULE_NAME} PROPERTIES FOLDER "base")

install_module(${MODULE_NAME})

